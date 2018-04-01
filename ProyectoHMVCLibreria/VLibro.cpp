/*
 * VLibro.cpp
 *
 *  Created on: 05/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "VLibro.h"

VLibro::VLibro() {}

void VLibro::ImprimirLibro(string cod,float cn,float pc)
{
		Limpiar();
	   cout << "  INFORMACION DEL Libro:" << endl;
	   cout << " ========================" << endl;
	   ImprimirString("\n\n Codigo:",cod);
	   ImprimirNroDecimal("\n Costo Neto:",cn);
	   ImprimirNroDecimal("\n Precio Neto:",pc);
	   ImprimirLineasBlanco(2);
	   Pausa();

}

