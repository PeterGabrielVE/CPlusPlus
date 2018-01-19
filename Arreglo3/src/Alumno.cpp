/*
 * Alumno.cpp
 *
 *  Created on: 01/02/2013
 *  Author: Gabriel Leal
 */

#include "Alumno.h"

Alumno::Alumno()
{
	nota=0.0;
}

void Alumno::setCedula(string laCedula)
{
	cedula = laCedula;
}



string Alumno::getCedula()
{
	return cedula;
}



void Alumno::setSexo(char elSexo)
{
	sexo = elSexo;
}



char Alumno::getSexo()
{
	return sexo;
}



void Alumno::setNota(float laNota)
{
	nota = laNota;
}



float Alumno::getNota()
{
	return nota;
}




