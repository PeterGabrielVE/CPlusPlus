/*
 * VTienda.cpp
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VTienda.h"

VTienda::VTienda()
{
	// TODO Auto-generated constructor stub

}

void VTienda::ImprimirTienda(float acumg)
{
    Limpiar();
	ImprimirEncabezado("\n\n\tInformacion del Electrodomestico",
					       "\t________________________________");
	ImprimirNroDecimal("\n\tGanancia total por la venta de juguetes: Bs ",acumg);
	ImprimirLineasBlanco(2);
    Pausa();
}



