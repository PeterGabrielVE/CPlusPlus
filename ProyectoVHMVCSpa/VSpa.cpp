/*
 * VSpa.cpp
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#include "VSpa.h"

VSpa::VSpa() {
	// TODO Auto-generated constructor stub

}

void VSpa::ImprimirReporte(vector<string> vauxced, vector<float> vauxmtoc , float montototspa)
{
	Limpiar();
	ImprimirLineasBlanco(2);
	ImprimirStringJustificado("REPORTE ESTADISTICO POR LAS TERAPIAS APLICADAS  A LOS CLIENTES",73);
	ImprimirLineasBlanco(1);
	ImprimirStringJustificado("==================================================================",73);
	ImprimirLineasBlanco(2);
	ImprimirStringJustificado("Cedula del Cliente",33);
	ImprimirStringJustificado("Monto Ingresado por Terapias",38);
	ImprimirLineasBlanco(1);
	// Instrucciones que imprimen la descripcion y el total ingresado por cda tratamiento
	for (unsigned int i=0; i < vauxced.size(); i++)
	{ ImprimirLineasBlanco(1);
	  ImprimirStringJustificado(vauxced[i],33);
	  ImprimirNroDecimalJustificado(vauxmtoc[i],38);
	}
	ImprimirLineasBlanco(3);
	ImprimirNroDecimal("Monto Total Ingresado al SPA: ", montototspa);
	ImprimirLineasBlanco(2);
	Pausa();
	}


