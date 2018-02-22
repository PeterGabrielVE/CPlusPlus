/*
 * Venta.cpp
 *
 *  Created on: 04/07/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Venta.h"

// M�todo que Inicializa el monto de ventas en 0
Venta::Venta()
{
	monto = 0.0;
}

// M�todo que Asigna un valor al atributo monto de ventas
void Venta::setMonto(float elMonto)
{
	monto = elMonto;
}

//  M�todo que Lee el monto de ventas
float Venta::getMonto()
{
	return monto;
}


