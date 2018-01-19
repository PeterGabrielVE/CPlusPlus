/*
 * Alumno.cpp
 *
 *  Created on: 16/03/2013
 *  Author: Gabriel Leal
 */

#include "Alumno.h"

Alumno::Alumno()
{
	// TODO Auto-generated constructor stub

}

void Alumno::setNota(int laNota)
{
	Nota=laNota;
}



int Alumno::getNota()
{
	return Nota;
}



void Alumno::setNombre(string elNombre)
{
	Nombre=elNombre;
}



string Alumno::getNombre()
{
	return Nombre;
}



