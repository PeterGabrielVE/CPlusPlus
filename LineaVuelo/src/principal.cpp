/*
 * principal.cpp
 *
 *  Created on: 17/06/2012
 *  Author: Gabriel Leal
 *
 *  Una línea aérea ofrece diariamente vuelos (nacionales e internacionales). Por cada uno de los
	25 vuelos se conoce: número de vuelo, tipo de vuelo (N=Nacional, I=Internacional), costo del
	pasaje y número de pasajeros transportados.
	Calcular :
	Por cada vuelo
	a) Mostrar el Número del vuelo y el Ingreso obtenido.
	Por la línea aérea mostrar:
	a) Ingreso total del día
	b) Menor número de pasajeros transportados en un vuelo
	c) Porcentaje de pasajeros que viajaron en vuelos internacionales
 *
 */

#include <iostream>
#include <stdlib.h>
#include "vuelo.h"
#include "linea.h"
using namespace std;

void IEvuelo(vuelo &elvuelo);
void ISvuelo(vuelo elvuelo);
void IControl(char &respuesta);
void ISlinea(linea lalinea);

int main()
{
	vuelo elvuelo;
	linea lalinea;
	char respuesta;

	respuesta = 'S';

	while (respuesta == 'S')
	{
		IEvuelo(elvuelo);
		lalinea.contarpasi(elvuelo);
		lalinea.contarpasn(elvuelo);
		lalinea.acumularingt(elvuelo);
		lalinea.acumularingxv(elvuelo);
		lalinea.contarpast(elvuelo);
		lalinea.tenermenor(elvuelo);
		lalinea.tenermayor(elvuelo);
		ISvuelo(elvuelo);
		IControl(respuesta);
	}
	ISlinea(lalinea);
	return 0;
}

void IEvuelo (vuelo &elvuelo)
{
	int elnumv;
	char eltipov;
	int lacantp;
	float elcostop;

	cout<<"Datos de Entrada Vuelo"<<endl;
	cout<<"Ingrese el numero del vuelo"<<endl;
	cin>>elnumv;
	cout<<"Ingrese el tipo de vuelo N(nacional) I(internacional)"<<endl;
	cin>>eltipov;
	cout<<"Ingrese la cantidad de pasajeros"<<endl;
	cin>>lacantp;
	cout<<"Ingrese el costo del pasaje"<<endl;
	cin>>elcostop;
	elvuelo.asignarcantp(lacantp);
	elvuelo.asignarcostop(elcostop);
	elvuelo.asignarnumv(elnumv);
	elvuelo.asignartipov(eltipov);
}

void ISvuelo(vuelo elvuelo)
{
	cout<<"Vuelo n�"<<elvuelo.obtenernumv()<<" ha tenido un ingreso de: "<<elvuelo.calcularing()<<endl;
}

void IControl(char &respuesta)
{
	cout<<"hay mas vuelos por procesar S/N"<<endl;
	cin>>respuesta;
}

void ISlinea(linea lalinea)
{
	cout<<"el total de pasajeros nacionales es: "<<lalinea.obtenercontpasn()<<endl;
	cout<<"el total de pasajeros intenacionales es:"<<lalinea.obtenercontpasi()<<endl;
	cout<<"el porcentaje depasajeros internacionales es: "<<lalinea.obteneracumingt()<<"%"<<endl;
	cout<<"la menor cantidad de pasajeros en un vuelo fue de: "<<lalinea.obtenermenor()<<endl;
	cout<<"la mayor cantidad de pasajeros en un vuelo fue de:  "<<lalinea.obtenercontmayor()<<endl;
	cout<<"el total de pasajeros es:"<<lalinea.obtenercontpast()<<endl;
	cout<<"el ingreso total es de: "<<lalinea.obteneracumingxv()<<endl;

}
