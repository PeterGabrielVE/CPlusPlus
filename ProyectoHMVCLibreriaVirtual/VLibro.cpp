/*
 * Vlibro.cpp
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VLibro.h"

VLibro::VLibro() {
	// TODO Auto-generated constructor stub

}

void VLibro::ImprimirLibro(string codigo, float precioneto, float costoneto)
{
	Limpiar();
	ImprimirEncabezado("\n\n\tINFORMACION DEL LIBRO",
		                   "\t_____________________");

	ImprimirString( "\n\t Codigo: ",codigo);
	ImprimirNroDecimal("\n\t Precio Neto: ", precioneto );
	ImprimirNroDecimal("\n\t Costo Neto: ", costoneto );

	cout<<"\n\n\t\t";
	Pausa();

}



