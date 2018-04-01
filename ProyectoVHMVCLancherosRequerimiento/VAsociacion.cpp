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

void VAsociacion::ImprimirConsulta( string nombredia, string nombrelanchero,
			                        float montodia, float montosemana)
{


		ImprimirString("\n      Dia Semana: ",nombredia);
		ImprimirString("\n\n      Nombre del Lanchero: ",nombrelanchero);
		ImprimirNroDecimal("\n\n      Total Bsf del dia: " ,montodia);
		ImprimirNroDecimal("\n\n      Total Bsf en la Semana: " ,montosemana);
		ImprimirLineasBlanco(2);
		Pausa();
}

void VAsociacion::ImprimirListadoIngresosDiarios (vector<string> vauxdias, vector<float> vauxmtosemana)
{
	Limpiar();
	ImprimirLineasBlanco(3);
	ImprimirStringJustificado("Listado de Ingresos Diarios",40);
	ImprimirLineasBlanco(1);
	ImprimirStringJustificado("___________________________",40);
	ImprimirLineasBlanco(2);
	ImprimirStringJustificado("Dia Semana",20);
	ImprimirStringJustificado("Total BsF" ,20);
	ImprimirLineasBlanco(1);
    ImprimirStringJustificado("_____________________________",40);
    ImprimirLineasBlanco(1);
	for (unsigned int d=0; d<vauxdias.size(); d++)
	{
   	  ImprimirStringJustificado(vauxdias[d],20);
	  ImprimirNroDecimalJustificado(vauxmtosemana[d],20);
	  ImprimirLineasBlanco(1);
	}
	ImprimirLineasBlanco(2);
	Pausa();
}

void VAsociacion::ImprimirTrasladosLanchero(string nombrelanchero,
		                                    int canttraslados) {
    Limpiar();
	ImprimirString(" Nombre del lanchero: ",nombrelanchero);
	ImprimirNro(" Total traslados realizados por el lanchero hacia el cayo: ",canttraslados);
	Pausa();
}

void VAsociacion::ImprimirCantTrasladosxUnCayo(int canttraslados) {

 Limpiar();
 ImprimirNro(" total traslados realizados hacia el cayo: ",canttraslados);
 Pausa();
}

void VAsociacion::ImprimirCantLacherosSinTraslados(int cantlachsintrasl) {
	Limpiar();
	ImprimirNro(" Total lancheros sin traslados en ese dia: ",cantlachsintrasl);
	Pausa();
}


