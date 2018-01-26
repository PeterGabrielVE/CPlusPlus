/*
 * VTienda.cpp
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */
#include "VTienda.h"

VTienda::VTienda(){}
// Imprime el Reporte requerido por la tienda
void VTienda::ReporteTienda(vector<string> auxnom,
                   vector<float> auxbs,
                   float montotottienda, float promedio)
{  Limpiar();
   ImprimirLineasBlanco(2);
   ImprimirStringJustificado("Listado de DEPARTAMENTOS",40);
   ImprimirLineasBlanco(1);
   ImprimirStringJustificado(" ========================",40);
   ImprimirLineasBlanco(2);
   ImprimirStringJustificado("Numero",20);
   ImprimirStringJustificado("Nombre",20);
   ImprimirStringJustificado("Ventas Totales",25);
   // Instrucciones que imprimen el c�digo, nombre y monto total de ventas de cada departamento
   for (unsigned int i=0; i < auxnom.size(); i++)
   { ImprimirLineasBlanco(1);
	 ImprimirNroJustificado(i+1,20);
     ImprimirStringJustificado(auxnom[i],20);
     ImprimirNroDecimalJustificado(auxbs[i],25);
   } 
   ImprimirLineasBlanco(3);
   ImprimirNroDecimal(" Monto total vendido por la tienda: ",montotottienda);
   ImprimirNroDecimal("\n\n Promedio de ventas de la tienda: ",promedio);
   ImprimirLineasBlanco(2);
   Pausa(); 
}
