/*
 * Principial.cpp
 *
 *  Created on: 23/11/2013
 *  Author: Pedro Gabriel Leal
 */


#include "VClub.h"

VClub::VClub() {
	// TODO Auto-generated constructor stub

}

void VClub::ImprimirClub(float promedio)
{
	Limpiar();
	ImprimirEncabezado("informacion del Club",
			            "___________________");
	ImprimirNroDecimal("\n\nPromedio en Bsf Cobrado a los Socios: ", promedio);
	ImprimirLineasBlanco(3);
	Pausa();
}
