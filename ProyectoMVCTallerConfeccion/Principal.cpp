/*
 * Principal.cpp
 * Author: Pedro Leal
 *
 * Ejercicio #4(GUIA DE EJERCICIOS 1er parcial).
 *
 * En un taller de confecci�n, el director general desea un sistema que permita llevar el control
 * de las horas trabajadas de los operarios; de tal manera que al final de la semana se pueda determinar
 * cual ser� el sueldo neto de los mismos. Se sabe que los operarios cuentan con una c�dula de identidad,
 * y se clasifican seg�n un tipo (1Supervisor, 2Costurera, 3Empacador).
 *
 * Adicionalmente se considera que el operario tiene horas extras, solo si trabaja m�s de 40 horas semanales.
 * El valor de una hora extra es igual al precio que se le paga al operario por una hora trabajada,
 * m�s un porcentaje de incremento sobre dicho precio.
 *
 * En la siguiente tabla se muestra informaci�n pertinente
 * al valor de la hora trabajada por cada tipo de operario,
 * con el respectivo porcentaje de incremento que se debe considerar
 * para el c�lculo de la hora extra.
 *
 * Tipo Operario	Valor de hora trabajada	% de incremento por hora extra
 * Supervisor	         32.00                       	20%
 * Costurera	         20.00	                        40%
 * Empacador	         18.00	                        35%
 *
 * Actualmente a cada operario se le da un bono de alimentaci�n diario de 38.00 Bsf
 * Es importante resaltar que el taller, adem�s de la informaci�n de cada uno de sus operarios,
 * junto al tipo de operario en letras.
 * tambi�n requiere que se le suministre
 * cantidad de operarios que trabajaron horas extras,
 * monto total a cancelar por horas extras
 * y monto total por sueldos,
 *
 *
 */

#include "Controlador.h"

int main()
{
   system ("cls");
   Controlador c;
   c.ProcesarTallerC();
   c.Reporte();
   return 0;
}
