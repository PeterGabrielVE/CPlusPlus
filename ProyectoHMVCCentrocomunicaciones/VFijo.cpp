/*
 * VFijo.cpp
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#include "VFijo.h"

VFijo::VFijo() {
	// TODO Auto-generated constructor stub
}

void VFijo::ImprimirFijo(int nrotlf, float rentabasica, float montoapagar)
{
	Limpiar();
	ImprimirEncabezado("\n\tInformacion del Telefono Fijo",
				         "\t_____________________________");
	ImprimirNro("\n\tNumero: ",nrotlf);
	ImprimirNroDecimal("\n\tRenta Basica: ",rentabasica);
	ImprimirNroDecimal("\n\tMonto total a pagar: ",montoapagar);
	ImprimirLineasBlanco(2);
	Pausa();
}



