/*
 * Principal.cpp
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 *
 *
 *
 *
 * De todos los alumnos que cursaron la asignatura programaci�n I se conoce:
 * c�dula, nombre y nota final sobre 20 puntos.
 * En la siguiente tabla se presenta la equivalencia en letra de las nota final


A ->19 y 20

B-> 16,17,18

C-> 13,14,15

D-> 10,11,12

E-> 1 hasta 9


La coordinaci�n de Programaci�n I necesita conocer por cada alumno:
c�dula, nombre, nota final y su equivalente en letra
y adem�s: cantidad de alumnos con calificaci�n 20,
Porcentaje de alumnos aplazado,
promedio de notas del grupo de alumnos aprobados
 */

#include "Controlador.h"

int main()
{
   system ("cls");
   Controlador c;
   c.ProcesarCoordinacion();
   c.Reporte();
   return 0;
}


