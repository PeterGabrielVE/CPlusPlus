/**********************************************************************************************
 * Un vendedor conoce el monto en bol�vares de cada una de las 40 ventas que realizo durante
 * el mes y desea conocer la siguiente informaci�n:
 *
 * a.- Promedio de Ventas.
 * b.- Monto mayor vendido. ( Es decir la mayor Venta)
 * c.- Total de ventas con monto mayor que el promedio.
 * d.- Total de ventas con monto igual al monto mayor vendido
 * *********************************************************************************************
 * Principal.cpp
 *
 *  Created on: 04/07/2012
 *      Author: Pedro Gabriel Leal
 */

 /**********************************************************************************************
 */

#include <iostream>

/*En esta biblioteca se definen algunas de las funciones aplicables a los "streams",
 * por ahora estamos trabajando con:
 * cin, canal de entrada est�ndar.  y  cout, canal de salida est�ndar.
 * ***************************************************************************************************************
 */
#include <stdlib.h>
/* Es la biblioteca est�ndar de prop�sito general,contiene los prototipos de funciones para gesti�n de memoria din�mica,
 *  control de procesos y otras
 * ***************************************************************************************************************
*/
//****************************************************************************************************************
/*Los archivos de descripci�n de interface,o archivos de encabezado(header) contienen las declaraciones de constantes,
*variables y funciones de las que consta el m�dulo, asi como llamadas a otros archivos de encabezado necesarios.
*/
#include "Venta.h"
/* Icluye la definicion de la clase Venta
*/
#include "Vendedor.h"
/* Incluye la Definicion de la clase Vendedor
*/
using namespace std;
/* En el espacio de nombre llamado std, se incluyen las definiciones de todas las funciones y clases que
 * conforman la biblioteca est�ndar de C++, de manera de evitar que alguna de las variables o funciones
 * que definamos en nuestro programa tengan el mismo nombre de algunas de las funciones o variables de las librerias de C++
 * aqui se incluyen las definiciones, entre muchas otras cosas del objeto cout y cin ,
 * que representa el flujo de salida est�ndar (t�picamente pantalla) y el flujo de entrada est�ndar (teclado)
*/
//***************************************************************************************************************

// void  se utiliza para determinar que los metodos o funciones IEVenta. IEVendedor ISVendedor no retornan un valor
//**************************************************************************************************************
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


// M�todo que Lee los montos de ventas
void IEVenta (Venta &laVenta)
{
	float elMonto;
	cout << "Ingrese el Monto de la Venta: " <<endl;
	cin.sync();
	// sync vac�a y sincroniza el buffer de entrada
	cin >> elMonto;
	laVenta.setMonto(elMonto);
}

// M�todo que Carga el Arreglo Ventas con cada uno de los  montos de ventas leido por el M�todo anterior IEVenta

void IEVendedor (Vendedor &elVendedor)
{
	Venta laVenta;
	cout << "CARGANDO EL ARREGLO...."<<endl;
	for (int i = 0; i<MAX; i++)
	{
		cout << "Venta # " << i+1 <<endl;

		IEVenta(laVenta);
		elVendedor.setVenta(laVenta);    //// Llamada al M�todo que carga el Arreglo
	}

}

void ISVendedor (Vendedor elVendedor)
{
	cout <<"Promedio de Ventas BsF.                 : " <<elVendedor.promediar()<<endl;
	cout <<"El Monto Mayor Vendido fue de BsF.      : " <<elVendedor.mayorVenta().getMonto()<<endl;
	cout <<"Nro de Ventas Mayor al Promedio         : " <<elVendedor.cantVMP() <<endl;
	cout <<"Nro de Ventas con monto igual a la Mayor: " <<elVendedor.cantVIM()<<endl;
}
