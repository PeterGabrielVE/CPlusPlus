/*
 * Vendedor.cpp
 *se implementa el c�digo para los m�todos declarados en el archivo de encabezado Vendedor.h.
 *  Created on: 04/07/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Vendedor.h"

 // M�todo que Inicializa el puntero en 0
Vendedor::Vendedor()
{
	ptr = 0;

}
// Asigna un valor al puntero ptr
void Vendedor::setPtr(int elPtr)
{
	ptr = elPtr;
}

// Lee el puntero ptr
int Vendedor::getPtr()
{
	return ptr;
}

// M�todo que carga el Arreglo
bool Vendedor::setVenta(Venta laVenta)
{
	if (ptr < MAX)
	{
		A_Ventas [ptr] = laVenta;
		ptr++;
		return true;
	}
	else
		return false;
}
// M�todo que lee el  Arreglo, en una posici�n determinada
Venta Vendedor::getVenta(int i)
{
	return A_Ventas [i];
}


//  M�todo que calcula el Promedio de Ventas.

float Vendedor::promediar()
{
	float acumMonto = 0;
	for (int i=0; i < ptr; i++)
	{
		acumMonto = acumMonto + A_Ventas[i].getMonto();
	}
	return acumMonto/ptr;
}

// M�todo que determina el Monto mayor vendido. ( Es decir la mayor Venta)

Venta Vendedor::mayorVenta()
{
	Venta laMayor;
	int posMayor = 0;

	for (int i=1; i<ptr; i++)
	{
		if (A_Ventas[i].getMonto() > A_Ventas[posMayor].getMonto())
			posMayor = i;
	}
	return A_Ventas [posMayor];
}

// M�todo que determina el  Total de ventas (cantidad de ventas) con un monto de ventas  mayor que el promedio de ventas.

int Vendedor::cantVMP()
{
	float prom = promediar();
	int cant = 0;
	for(int i = 0; i < ptr ; i++)
		if (A_Ventas[i].getMonto() > prom)
			cant++;

	return cant;
}

//  M�todo que determina el  Total de ventas (cantidad de ventas) con un  monto de ventas igual al monto mayor vendido

int Vendedor::cantVIM()
{
	int cant = 0;
	float montoMayor = mayorVenta().getMonto();

	for(int i = 0; i < ptr ; i++)
		if (A_Ventas[i].getMonto() == montoMayor)
			cant++;

	return cant;
}


