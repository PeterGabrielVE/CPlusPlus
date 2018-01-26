/*
 * VCompannia.cpp
 *
 *  Created on: 05/01/2012
 *       Author: Pedro Gabriel Leal
 *
 */


#include "VCompannia.h"

VCompannia :: VCompannia() {}

void VCompannia :: ReporteCorredores(vector<string> auxced,
			                         vector<string> auxnom,
	                                 vector<float> auxcomi)
{
	Limpiar();
	ImprimirStringJustificado("LISTADO CORREDORES DE SEGUROS",46);
	ImprimirLineasBlanco(1);
	ImprimirStringJustificado("=============================",46);
	ImprimirLineasBlanco(2);
	ImprimirStringJustificado("CEDULA",12);
	ImprimirStringJustificado("NOMBRE",25);
	ImprimirStringJustificado("COMISION MENSUAL",20);
	ImprimirLineasBlanco(1);
	// Instrucciones que imprimen la c�dula, nombre y comision mensual de los corredores de seguros
	for(unsigned int i=0; i<auxced.size(); i++)
	{
		ImprimirStringJustificado(auxced[i],12);
		ImprimirStringJustificado(auxnom[i],25);
		ImprimirNroDecimalJustificado(auxcomi[i],20);
		ImprimirLineasBlanco(1);

	}
	ImprimirLineasBlanco(1);
	Pausa();
}

void VCompannia :: ReporteCorredoresSuperaronMeta(vector<string> auxced)

{
	if (auxced.size()!=0)
	   {
	      Limpiar();
	      ImprimirEncabezado("LISTADO CORREDORES QUE SUPERARON META DE VENTA", "==============================================");
	      ImprimirMensaje("CEDULAS");
	      ImprimirLineasBlanco(1);
	      /*Instrucciones que imprimen las c�dulas de los corredores que superaron la
	        meta establecida para un tipo de seguro*/

	      for(unsigned int i=0; i<auxced.size(); i++)
	      {
	    	  ImprimirString("",auxced[i]);
	    	  ImprimirLineasBlanco(1);
	      }
	      ImprimirLineasBlanco(1);
	      Pausa();
	      return;
	   }
	Limpiar();
	ImprimirMensaje("\n\n NO EXISTEN CORREDORES QUE HAYAN SUPERADO LA META\n\n");
	Pausa();

}
