/*
 * principal.cpp
 *
 *  Created on: 07/03/2013
 *      Author: Gabriel
 *
 *       *   Una Compa��a de Seguros ofrece dos tipos de p�liza (vida y HCM) y con el fin de incrementar
 *   las ventas, ha definido la siguiente pol�tica:
�	Si el monto de las ventas de un productor de seguros es inferior a 100.000 BsF la comisi�n
 es del 3%  respecto al monto de sus ventas, en caso contrario, la comisi�n es del 5%.
 (el monto de las ventas ser� igual a la suma del monto vendido de HCM m�s el monto vendido de
 vida).
�	Si logra vender m�s de cinco p�lizas de vida, ganar� una bonificaci�n de 185 BsF por cada
 p�liza de vida.

Si se sabe que el sueldo base es de 3000 BsF y que de cada productor de seguros, se conoce
 la c�dula, el monto vendido de HCM y  el monto vendido en p�lizas de vida,
1.	Calcule el monto a pagar por concepto de n�mina a los productores.
2.	Listado que muestre de manera ordenada (de menor a mayor), aquellos productores que cobraron
un monto menor o igual al promedio. Muestre solamente c�dula y monto a cobrar
(monto a cobrar ser� igual a sueldo base + comisi�n ventas +  bonificaci�n)
3.	Porcentaje de productores de seguro que cobraron bonificaci�n.
4.	Cantidad total de p�lizas de vida vendidas (cada p�liza de vida cuesta 2000BsF)
5.	Muestre toda la informaci�n de los tres mejores productores de seguro, es decir, los que m�s
 ingresos tuvieron (muestre c�dula, monto a cobrar, monto vendido en vida y monto de HCM)
 *
 *
 */

#include <iostream>
#include <stdlib.h>
#include "Polizas.h"
#include "Compania.h"
using namespace std;

void IECompania(Compania &laCompania);
void ISCompania(Compania laCompania);
void Buscar(Compania laCompania);

int main()
{
	Compania laCompania;
	IECompania(laCompania);
	ISCompania(laCompania);
	char resp='s';
	while(resp=='s' || resp=='S')
	{
		Buscar(laCompania);
		cout << endl << "Desea realizar otra busqueda? (s/n)" << endl;
		cin >> resp;
	}
	return 0;
}

void IEPolizas(Polizas &laPolizas)
{
	string elNombre;
	string laCedula;
	float MontoHCM;
	int laCantPV;
	cout << endl << "Ingrese la cedula del vendedor:" << endl;
	cin >> laCedula;
	laPolizas.setCedula(laCedula);
	cout << endl << "Ingrese el nombre del vendedor:" << endl;
	cin >> elNombre;
	laPolizas.setNombre(elNombre);
	cout << endl << "Ingrese el monto de la poliza HCM:" << endl;
	cin >> MontoHCM;
	laPolizas.setMontoHCM(MontoHCM);
	cout << endl << "Ingrese la cantidad de poliza Vida:" << endl;
	cin>>laCantPV;
	laPolizas.setCantPolizaV(laCantPV);
}

void IECompania(Compania &laCompania)
{
	Polizas laPolizas;
	for(int i=0;i<MAX;i++)
	{
		IEPolizas(laPolizas);
		laCompania.setAPolizas(laPolizas);
		laCompania.OrdenarPolizas();
	}
}

void ISCompania(Compania laCompania)
{
	int i;
	cout << endl << "CEDULA          MONTO A COBRAR        MONTO EN TOTAL DE LAS POLIZAS (BsF.)" << endl;

	for(i=0;i<MAX;i++)
	{
		cout << laCompania.getAPolizas(i).getCedula() << "     " << laCompania.CalcMontoCobrar()<< "           " << laCompania.getAPolizas(i).CalcMontoTotal() << "          "<<endl;
	}
	cout << "El porcentaje de Productores que cobraron bonificacion es de : " << laCompania.CalcPorcPB() << "%" << endl;
	cout << "la Cantidad total de las polizas es: Bs." << laCompania.CalcCantPolizasV()<< endl;
	cout<<"El Monto a Pagar es de : "<<laCompania.CalcMontoPagar()<<" BsF." <<endl;
	system("pause");
}

void Buscar(Compania laCompania)
{
	Polizas laPolizas;
	string elNombre;
	int posicion;
	cout << endl << "Introduzca nombre a buscar:" << endl;
	cin >> elNombre;
	posicion=laCompania.BuscarNombre(elNombre);
	if(posicion!=-1)
	{
		cout << "El nombre existe en la posicion:    " << posicion << endl;
       cout << "Su comision:    Bs." << laCompania.getAPolizas(posicion).CalComision() << endl;
	}else
		cout << endl << "No existe" << endl ;
	system("pause");
}
