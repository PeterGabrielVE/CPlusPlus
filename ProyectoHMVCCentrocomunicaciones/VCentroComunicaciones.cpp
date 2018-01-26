/*
 * VCentroComunicaciones.cpp
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#include "VCentroComunicaciones.h"

VCentroComunicaciones::VCentroComunicaciones() {
	// TODO Auto-generated constructor stub

}

void VCentroComunicaciones::ImprimirCentroComunicaciones(float montorecaudado)
{
	Limpiar();
	ImprimirEncabezado("\n\tInformacion del Centro de Comunicaciones",
				         "\t________________________________________");
		ImprimirNroDecimal("\n\tGanancia de la venta del juguete: Bs ",montorecaudado);
		ImprimirLineasBlanco(2);

	Pausa();
}



