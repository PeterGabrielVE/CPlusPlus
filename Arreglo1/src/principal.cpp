/*
 * principal.cpp
 *
 *  Created on: 10/07/2012
 *  Author: Pedro Gabriel Leal
 *  Una librería conoce el tipo de venta (Mayor/Detal) y el monto en BsF.
 *  de cada una de las 100 ventas realizadas durante el día.
 *  Determine el promedio de ventas al detal.
 */

#include "Venta.h"
#include "Libreria.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
void IELibreria (Libreria & laLibreria);
void ISLibreria (Libreria  laLibreria);
int main()
{
	Libreria laLibreria;
	IELibreria(laLibreria);
	ISLibreria(laLibreria);
	return 0;
}
void IEVenta(Venta & laVenta)
{
	char eltipoV;
	float elmonto;
	cout<<" ======= Datos de la Venta ======= "<<endl;
	cout<<"Tipo de Venta (D)al deltal y (M)al mayor: ";
	cin>>eltipoV;
	laVenta.settipoV(eltipoV);
	cout<<"Ingrese el Monto: ";
	cin>>elmonto;
	laVenta.setmonto(elmonto);
}
void IELibreria (Libreria & laLibreria)
{
	Venta laVenta;
	for (int i=0; i<MAX; i++)
	{
		IEVenta (laVenta);
		laLibreria.setAVenta(laVenta);
		laLibreria.calMayorV(laVenta);
		cout<<endl;
	}
}
void ISLibreria (Libreria  laLibreria)
{
	cout<<"Promedio de la Venta al Deltal: "<<laLibreria.calPromV()<<endl;
	cout<<"La Mayor Venta es: "<<laLibreria.getMayorV().getmonto()<<endl;
	system ("pause");
}

