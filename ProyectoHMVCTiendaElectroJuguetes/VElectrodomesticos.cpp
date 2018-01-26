/*
 * VEletrodomestico.cpp
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VElectrodomesticos.h"

VElectrodomesticos::VElectrodomesticos()
{
	// TODO Auto-generated constructor stub

}

void VElectrodomesticos::ImprimirElectrodomesticos(string cod, string desc,string elcolor, float precvta)

{
	Limpiar();
	ImprimirEncabezado("\n\n\tInformacion del Electrodomestico",
			               "\t________________________________\n");
	ImprimirString("\n\tCodigo: ",cod);
	ImprimirString("\n\tDescripcion: ",desc);
	ImprimirString("\n\tColor del Electrodomestico:", elcolor);
	ImprimirNroDecimal("\n\tPrecio de venta:  Bs ",precvta);
	ImprimirLineasBlanco(2);
	Pausa();

}



