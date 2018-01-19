/*
 * Vendedor.cpp

 *  Created on: 14/07/2012
 *      Author: Pedro Leal
 */

#include "Vendedor.h"

Vendedor::Vendedor()
{
	ptr = 0;

}

void Vendedor::setPtr(int elPtr)
{
	ptr = elPtr;
}


int Vendedor::getPtr()
{
	return ptr;
}


bool Vendedor::setVenta(Venta laVenta)
{
	if (ptr < MAX)
	{
		AVentas [ptr] = laVenta;
		ptr++;
		return true;
	}
	else
		return false;
}

Venta Vendedor::getVenta(int i)
{
	return AVentas [i];
}




float Vendedor::promediar()
{
	float acumMonto = 0;
	for (int i=0; i < ptr; i++)
	{
		acumMonto = acumMonto + AVentas[i].getMonto();
	}
	return acumMonto/ptr;
}



Venta Vendedor::mayorVenta()
{
	Venta laMayor;
	int posMayor = 0;

	for (int i=1; i<ptr; i++)
	{
		if (AVentas[i].getMonto() > AVentas[posMayor].getMonto())
			posMayor = i;
	}
	return AVentas [posMayor];
}



int Vendedor::cantVMP()
{
	float prom = promediar();
	int cant = 0;
	for(int i = 0; i < ptr ; i++)
		if (AVentas[i].getMonto() > prom)
			cant++;

	return cant;
}


int Vendedor::cantVIM()
{
	int cant = 0;
	float montoMayor = mayorVenta().getMonto();

	for(int i = 0; i < ptr ; i++)
		if (AVentas[i].getMonto() == montoMayor)
			cant++;

	return cant;
}

Venta Vendedor::menorVenta()
{
	Venta laMenor;
	int posMenor = 0;

	for (int i=1; i> ptr; i++)
	{
		if (AVentas[i].getMonto() < AVentas[posMenor].getMonto())
			posMenor = i;
	}
	return AVentas [posMenor];
}
int Vendedor::cantVCP()
{
	float prom = promediar();
	int cant = 0;
	for(int i = 0; i < ptr ; i++)
		if (AVentas[i].getMonto() > prom)
			cant++;

	return cant;
}

