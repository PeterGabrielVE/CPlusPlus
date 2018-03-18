/*
 * VAsociacion.cpp
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
 */

#include "VAsociacion.h"

VAsociacion::VAsociacion() {
	// TODO Auto-generated constructor stub

}

void VAsociacion::ImprimirReporteLancheros(vector<string> vauxced,
		                                   vector<string> vauxnom,
		                                   vector<float> vauxgan) {
	Limpiar();
	ImprimirLineasBlanco(3);
	ImprimirStringJustificado("Reporte de Lancheros\n",50);
	ImprimirStringJustificado("____________________\n",50);
	ImprimirLineasBlanco(1);
	ImprimirStringJustificado("Cedula         Nombre del Lanchero          Ganancia\n",66);
	ImprimirStringJustificado("____________________________________________________\n",66);
	ImprimirLineasBlanco(1);
	for (unsigned int i=0; i<vauxced.size(); i++)
		{
	   	  ImprimirStringJustificado(vauxced[i],20);
	   	  ImprimirStringJustificado(vauxnom[i],28);
		  ImprimirNroDecimalJustificado(vauxgan[i],18);
		  ImprimirLineasBlanco(1);
		}
		ImprimirLineasBlanco(2);
		Pausa();
}


void VAsociacion::ImprimirListadoCayos(vector<string> vauxnomcayos,
		                               vector<float> vauxingresos) {

	    Limpiar();
		ImprimirLineasBlanco(3);
		ImprimirStringJustificado("Listado de ingresos de la asociacion por cada cayo\n",65);
		ImprimirStringJustificado("__________________________________________________\n",65);
		ImprimirLineasBlanco(1);
		ImprimirStringJustificado("Nombre del Lanchero          Ingreso Obtenido\n",63);
		ImprimirStringJustificado("_____________________________________________\n",63);
		ImprimirLineasBlanco(1);
		for (unsigned int i=0; i<vauxnomcayos.size(); i++)
			{
		   	  ImprimirStringJustificado(vauxnomcayos[i],26);
			  ImprimirNroDecimalJustificado(vauxingresos[i],26);
			  ImprimirLineasBlanco(1);
			}
			ImprimirLineasBlanco(2);
			Pausa();

}
