/*
 * VClubGolf.cpp
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal
 */

#include "VClubGolf.h"

VClubGolf::VClubGolf() {
	// TODO Auto-generated constructor stub

}

void VClubGolf::ImprimirReporte(vector<string>vauxdescrip, vector<float> vauxmto)
{


	Limpiar();
	ImprimirLineasBlanco(2);
	ImprimirStringJustificado("Reporte Estadistico por los Servicios de Alquiler",64);
	ImprimirLineasBlanco(1);
	ImprimirStringJustificado("=================================================",64);
	ImprimirLineasBlanco(1);
	ImprimirStringJustificado("Que se realizaron en cada Area",55);
	ImprimirLineasBlanco(1);
	ImprimirStringJustificado("==============================",55);

	ImprimirLineasBlanco(2);
	ImprimirStringJustificado("Descripcion del Area",37);
	ImprimirStringJustificado("Monto Total Ingresado",38);
	ImprimirLineasBlanco(1);
	// Instrucciones que imprimen la descripcion y el total ingresado por cada area
	for (unsigned int i=0; i < vauxdescrip.size(); i++)
	{
	  ImprimirLineasBlanco(1);
	  ImprimirStringJustificado(vauxdescrip[i],31);
	  ImprimirNroDecimalJustificado(vauxmto[i],38);
	}

	ImprimirLineasBlanco(3);
	ImprimirLineasBlanco(2);
	Pausa();
}



