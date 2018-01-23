/*
 * Principal.cpp
 *
 * Author:Gabriel Leal
 *
 * Ejercicio #4(GUIA DE EJERCICIOS 1er parcial).
 * En un taller de confección,  por cada uno de los operarios se tiene semanalmente
 * los siguientes datos:
 * cedula de identidad,
 * sueldo base semanal,
 * tipo de operario (1Supervisor, 2Costurera, 3Empacador),
 *  total de horas trabajadas
 *  y  precio de la hora.
 *  Considerar lo siguiente:
 *  Si trabaja más de 40 horas semanalmente, el operario tiene horas extras.
 *  El valor de la hora extra es igual al precio de la hora más un porcentaje de incremento
 *  sobre dicho precio. El incremento debe ser calculado según la siguiente tabla
 *  Tipo de Operario	% de incremento
 *  Supervisor	20
 *  Costurera	40
 *  Empacador	35
 *
 *
 *  Actualmente a cada operario se le descuenta el 1% Ley de Política Habitacional
 *  y 4% por Seguro Social obligatorio.
 *  La información que requiere el taller es la siguiente:
 *  por cada uno de los operarios su cédula y sueldo
 *  y además,
 *  cantidad de operarios que trabajaron horas extras,
 *  monto total a cancelar por horas extras y
 *  monto total por sueldos
 *
 *
 */

#include <cstdlib>
#include "Controlador.h"

int main()
{
   system ("cls");
   Controlador c;
   c.ProcesarTallerC();
   c.Reporte();
   return 0;
}
