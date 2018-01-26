/*
 * VCelular.cpp
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#include "VCelular.h"

VCelular::VCelular() {
	// TODO Auto-generated constructor stub

}

void VCelular::ImprimirCelular(int nrotlf, float rentabasica, float montoadicional)
{
	Limpiar();
	ImprimirEncabezado("\n\tInformacion del Celular",
					     "\t_______________________");
	ImprimirNro("\n\tNumero: ",nrotlf);
	ImprimirNroDecimal("\n\tRenta Basica: ",rentabasica);
	ImprimirNroDecimal("\n\tMonto Adicional: ",montoadicional);
	ImprimirLineasBlanco(2);
	Pausa();
}



