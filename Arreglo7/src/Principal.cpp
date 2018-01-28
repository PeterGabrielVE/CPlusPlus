/*
 * principal.cpp
 *
 *  Created on: 22/07/2012
 *      Author: Pedro Leal
 *
 *      Se quiere un programa para una Empresa con 25 vendedores que permita conocer el monto
total de la comisión en Bsf. que cancelará al final del mes. Por cada vendedor se conoce su
nombre y el monto total de las ventas del mes. Las comisiones se pagan de la siguiente
forma:
 Si el vendedor facturó por debajo del promedio se le cancela un 10% de comisión sobre
el total de sus ventas. En caso contrario se le cancela una comisión de un 15% sobre el
total de sus ventas.
 Al mejor vendedor se le asigna un bono adicional igual al promedio de las ventas.
Usted debe mostrar por pantalla:
a. Listado General que incluya “NOMBRE VENTAS COMISION”
b. El total de la General de la Comisión a cancelar en Bsf.
c. El nombre y la comisión del mejor vendedor.
 *
 */
#include<string>
#include<iostream>
#include<stdlib.h>
#include "empresa.h"
#include "vendedor.h"

using namespace std;

void IEVendedor(vendedor &elVendedor);
void IEEmpresa(empresa &laEmpresa);
void ISEmpresa(empresa laEmpresa);
void listadoGeneral(empresa laEmpresa);

int main()
{
	empresa laEmpresa;
	IEEmpresa(laEmpresa);
	ISEmpresa(laEmpresa);
	system("pause");
	return 0;
}

void IEVendedor(vendedor &elVendedor)
{
	string elNombre;
	float elTotalV;
	cout<< "Ingrese su nombre: ";
	cin.sync();
	cin>> elNombre;
	elVendedor.setNombre(elNombre);
	cout<<"\nIngrese el monto de sus ventas: ";
	cin.sync();
	cin>>elTotalV;
	elVendedor.setTotalV(elTotalV);

}

void IEEmpresa(empresa &laEmpresa)
{
	vendedor elVendedor;
	cout<<"DATOS DEL VENDEDOR...\n\n";
	for(int i=1; i<=MAX; i++)
{	cout <<"\nVendedor " <<i<<":\n";	
	IEVendedor(elVendedor);
	laEmpresa.setAVendedores(elVendedor);
}
}

void ISEmpresa(empresa laEmpresa)
{
	vendedor elV;
	elV = laEmpresa.determinarMejorV();
	listadoGeneral(laEmpresa);
	cout<<"***************************************************"<<endl;
	cout<<" El mejor vendedor es: "<< elV.getNombre()<<" con un total de ventas de: "<<elV.getTotalV()<<endl;
	cout<<" tiene una comisi�n de "<< laEmpresa.calcularComision(elV)<<" y un bono adicional de: " <<laEmpresa.calcularPromV() <<endl<<endl;
	cout<<"El total general de comision es: " <<laEmpresa.calcularComG()<<endl;
}
void listadoGeneral(empresa laEmpresa)
{
	vendedor elVend;
	cout<<"	LISTADO GENERAL DE LOS VENDEDORES \n";
	cout<<"	==================================\n";
	cout<<"NOMBRE          VENTAS          COMISI�N\n\n";
	cout<<"-----		-----		--------\n";
	for(int i=0; i<MAX; i++)
	{
	elVend= laEmpresa.getAVendedores(i);
	cout<<" "         <<elVend.getNombre()<<"          "<<elVend.getTotalV()<<"          "<<laEmpresa.calcularComision(elVend)<<endl;

	}
}

