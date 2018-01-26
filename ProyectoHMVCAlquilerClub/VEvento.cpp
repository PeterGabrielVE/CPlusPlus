/*
 * MConferencia.cpp
 *
 *  Created on: 23/11/2013
 *  Author:Pedro Gabriel Leal
 */

#include "VEvento.h"

VEvento::VEvento() {
	// TODO Auto-generated constructor stub

}

void VEvento::ImprimirEvento(int numsala, float montoapagar)
{
	Limpiar();
	ImprimirEncabezado("Informacion del Alquiler",
			           "_______________________");
	ImprimirNro("\nNumero de Sala: ",numsala);
	ImprimirNroDecimal("\n\nMonto a Cancelar: ",montoapagar);
	ImprimirLineasBlanco(3);
	Pausa();
}
