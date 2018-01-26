/*
 * VProfesor.cpp
 *
 *  Created on: 24/04/2012
 *  Author: Pedro Gabriel Leal
 */

#include "VProfesor.h"

VProfesor::VProfesor(){}

// Imprime la informaci�n requerida por profesor
void VProfesor::ImprimirProfesor(string ced,string nombre,string categoria, float sneto)
{
   Limpiar();
   ImprimirEncabezado("  INFORMACION DEL PROFESOR",
                      "  ========================");
   ImprimirString("\n\n  Cedula: ",ced);
   ImprimirString("\n  Nombre: ", nombre);
   ImprimirString("\n  Categoria: ",categoria);
   ImprimirNroDecimal("\n  Sueldo Neto: ",sneto);
   ImprimirLineasBlanco(2);
   Pausa();
}
