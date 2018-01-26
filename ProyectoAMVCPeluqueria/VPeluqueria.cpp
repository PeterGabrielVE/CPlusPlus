/*
 * VPeluqueria.cpp
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */

#include "VPeluqueria.h"
VPeluqueria :: VPeluqueria(){}
// Imprime los datos resultantes de la consulta de la peluquera
void VPeluqueria ::ImprimirConsulta(string nom,string nomdia,float bsdia)
{  Limpiar();
   ImprimirString("  Nombre Peluquera: ",nom);
   ImprimirString("\n  Dia: ",nomdia);
   ImprimirNroDecimal("\n  Total de Bs: ",bsdia);
   ImprimirLineasBlanco(1);
   Pausa();
}

// Imprime la informaci�n de una peluquera, necesaria para el reporte de la peluqueria
void VPeluqueria::ImprimirPeluquera(string ced,string nom,vector<string> nomdias,
    		           vector<float> bsxdia, float totalsemana)
{  
   ImprimirString("\n  Cedula: ",ced);
   ImprimirString("\n  Nombre: ",nom);
   ImprimirLineasBlanco(2);
   ImprimirStringJustificado("Dia ",15);
   ImprimirStringJustificado("Total Bs Dia",20);
   ImprimirLineasBlanco(1);
   // ciclo que imprime el nombre del dia seguido de los bs de ese dia
   for (unsigned int d=0; d<bsxdia.size(); d++)
   {ImprimirStringJustificado(nomdias[d],15);
    ImprimirNroDecimalJustificado(bsxdia[d],20);
    ImprimirLineasBlanco(1);
   }
   ImprimirNroDecimal("\n\n  Total Bs de la semana: ",totalsemana);
   ImprimirLineasBlanco(1);
   Pausa();
}
