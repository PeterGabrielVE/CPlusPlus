/*
 * VUniversidad.cpp
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#include "VUniversidad.h"

VUniversidad::VUniversidad(){}
// Imprime la informaci�n solicitada por la oficina de personal de la universidad
void VUniversidad::ImprimirUniv(int ctdoct, int ctcontra, float totbonoh)
{
   Limpiar();
   ImprimirEncabezado("  INFORMACION DE TOTALES",
		              "  ======================");
   ImprimirNro("\n\n  Total de profesores con doctorado: ",ctdoct);
   ImprimirNro("\n\n  Total de profesores CONTRATADOS con salario > 1500: ",ctcontra);
   ImprimirNroDecimal("\n\n  Monto total pagado en Bono por horario : ",totbonoh);
   ImprimirLineasBlanco(2);
   Pausa();
}
