/*
 * Venta.cpp
 *
 *  Created on: 14/07/2012
 *      Author: Pedro Leal
 */

#include "Venta.h"

Venta::Venta()
{
	monto = 0.0;
	tipoVenta='"';
}


void Venta::setMonto(float elMonto)
{
	monto = elMonto;
}


float Venta::getMonto()
{
	return monto;
}


void Venta::setTipoVenta(char elTipoVenta)
{
	tipoVenta=elTipoVenta;
}

char Venta::getTipoVenta()
{
	return tipoVenta;
}
