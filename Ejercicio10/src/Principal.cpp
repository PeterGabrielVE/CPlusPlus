/*
 * Principal.cpp
 *
 *  Created on: 22/06/2012
 *  Author: Pedro Gabriel Leal
 *
 *Una línea aérea ofrece diariamente vuelos (nacionales e internacionales). Por cada uno de los 25 vuelos se conoce: número de vuelo, tipo de vuelo (N=Nacional, I=Internacional), costo del pasaje y número de pasajeros transportados.
Calcular :
Por cada vuelo
a) Mostrar el Número del vuelo y el Ingreso obtenido.
Por la línea aérea mostrar:
a) Ingreso total del día
b) Menor número de pasajeros transportados en un vuelo
c) Porcentaje de pasajeros que viajaron en vuelos internacionales
 *
 *
 */


#include <iostream>
#include <stdlib.h>
#include "Vuelos.h"
#include "LineaAerea.h"
int const MAX = 3;

using namespace std;

void ISLineaAerea (LineaAerea laLinea, Vuelos losVl);
void IEVuelos (Vuelos &losVl);
void ISVuelos (Vuelos losVl);
void conFor ();

int main ()
{
	conFor ();
	cout << "Adios..." <<endl;
	return 0;
}

void conFor ()
{
	Vuelos losVl;
	LineaAerea laLinea;
	for (int i=1; i <= MAX; i++)
	{
		IEVuelos (losVl);
		laLinea.acumularIngresoTotal(losVl);
		laLinea.acumularPasajerosInternacionales(losVl);
		laLinea.acumularPasajerosTotal(losVl);
		laLinea.compararCantidadMenorP(losVl);
		laLinea.calcularPorcentajeInt(losVl);
		laLinea.compararMayorIngreso(losVl);
		laLinea.promediarIngresoVuelos(losVl);
		losVl.calcularIngreso();
		ISVuelos (losVl);
		system ("pause");
	}
	ISLineaAerea (laLinea, losVl);

}

void IEVuelos (Vuelos &losVl)
{
	string elNumV;
	char elTipoV;
	float elCostoP;
	int elNumPj;

	cout << "Ingrese el Numero de Vuelo:"<< endl;
	cin >> elNumV;
	losVl.setNumVuelo(elNumV);
	cout << "Ingrese el Tipo de Vuelo N(acional) o I(nternacional):" << endl;
	cin >> elTipoV;
	losVl.setTipoVuelo(elTipoV);
	cout << "Ingrese el Costo del Pasaje:" << endl;
	cin >> elCostoP;
	losVl.setCostoPasaje(elCostoP);
	cout << "Ingrese el Numero de Pasajeros:" << endl;
	cin >> elNumPj;
	losVl.setNumPasajeros(elNumPj);
	system ("pause");
}

void ISVuelos (Vuelos losVl)
{
	cout << "Datos de entrada de los Vuelos" << endl;
	cout << "El Numero de vuelo es:" << losVl.getNumVuelo() << endl;
	cout << "El Tipo de Vuelo es: " << losVl.getTipoVuelo() <<endl;
	cout << "El ingreso del Dia es: " << losVl.calcularIngreso() << endl;
}

void ISLineaAerea (LineaAerea laLinea, Vuelos losVl)
{
	cout << "Los Datos de Salida de la Linea: " << endl;
	cout << "El Ingreso Total es: " << laLinea.getAcumIngresoTotal()<<endl;
	cout << "El Numero Menor de Pasajeros es: " << laLinea.getCantidadMenorP().getNumPasajeros() <<"En el Vuelo: " <<laLinea.getCantidadMenorP().getNumVuelo() <<endl;
	cout << "El Porcentaje de Pasajeros Internacionales es: " << laLinea.calcularPorcentajeInt(losVl) <<'%' << endl;
	cout << "El Ingreso Mayor es: " << laLinea.getMayorIngreso().getCostoPasaje() <<   "  El vuelo: " << laLinea.getMayorIngreso().getNumVuelo() << endl;
	cout << "El Promedio de Ingreso es: " << laLinea.promediarIngresoVuelos(losVl) << endl;

}
