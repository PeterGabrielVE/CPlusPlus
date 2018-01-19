/**********************************************************************************************
 * Un vendedor conoce el monto en bol�vares de cada una de las 40 ventas que realizo durante
 * el mes y desea conocer la siguiente informaci�n:
 *
 * a.- Promedio de Ventas.
 * b.- Monto mayor vendido.
 * c.- Total de ventas con monto mayor que el promedio.
 * d.- Total de ventas con monto igual al monto mayor vendido
 * *********************************************************************************************
 * Principal.cpp
 *
 *  Created on: 14/07/2012
 *      Author: Pedro leal
 */

 /**********************************************************************************************
 */

#include <iostream>
#include <stdlib.h>
#include "Venta.h"
#include "Vendedor.h"
using namespace std;
void IEVenta (Venta &laVenta);
void IEVendedor (Vendedor &elVendedor);
void ISVendedor (Vendedor elVendedor);

int main()
{
	Vendedor elVendedor;

	IEVendedor(elVendedor);
	ISVendedor(elVendedor);
	system("Pause");
	cout << "Adios...." <<endl;
	return 0;
}


void IEVenta (Venta &laVenta)
{
	float elMonto;
	cout << "Ingrese el Monto de la Venta: " <<endl;
	cin.sync();
    cin >> elMonto;
	laVenta.setMonto(elMonto);
	char elTipoVenta;
	cout << "Tipo de la Venta (C)Credito (D)Debito: " <<endl;
	cin.sync();
	cin >> elTipoVenta;
	laVenta.setTipoVenta(elTipoVenta);

}


void IEVendedor (Vendedor &elVendedor)
{
	Venta laVenta;
	cout << "CARGANDO EL ARREGLO...."<<endl;
	for (int i = 0; i<MAX; i++)
	{
		cout << "Venta # " << i+1 <<endl;

		IEVenta(laVenta);
		elVendedor.setVenta(laVenta);
	}

}

void ISVendedor (Vendedor elVendedor)
{
	cout <<"Promedio de Ventas BsF.                 : " <<elVendedor.promediar()<<endl;
	cout <<"El Monto Mayor Vendido fue de BsF.      : " <<elVendedor.mayorVenta().getMonto()<<endl;
	cout <<"Nro de Ventas Mayor al Promedio         : " <<elVendedor.cantVMP() <<endl;
	cout <<"Nro de Ventas con monto igual a la Mayor: " <<elVendedor.cantVIM()<<endl;
	cout <<"El Monto Menor Vendido fue de Bsf.      : " <<elVendedor.menorVenta().getMonto()<<endl;
    cout <<"Nro de Ventas al contado con monto Mayor al promedio    : "<<elVendedor.cantVCP()<<endl;
}
