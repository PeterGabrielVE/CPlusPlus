/*
 * Alumno.cpp
 *
 *  Created on: 20/07/2012
 *      Author: Gabriel Leal
 */

#include "Alumno.h"

string Alumno::getNombre()
{
return nombre;
}

void Alumno::setNombre(string elNombre)
{
nombre = elNombre;
}

float Alumno::getNota1()
{
return nota1;
}
void Alumno::setNota1(float laNota1)
{
nota1 = laNota1;
}
float Alumno::getNota2()
{
return nota2;
}
void Alumno::setNota2(float laNota2)
{
nota2 = laNota2;
}
float Alumno::getNota3()
{
return nota3;
}
void Alumno::setNota3(float laNota3)
{
nota3 = laNota3;
}
Alumno::Alumno()
{
nombre = "*";
nota1 = 0.0;
nota2 = 0.0;
nota3 = 0.0;
}








