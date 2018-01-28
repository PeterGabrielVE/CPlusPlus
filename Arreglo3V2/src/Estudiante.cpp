/*
 * Estudiante.cpp
 *
 *  Created on: 15/07/2012
 *      Author: Pedro Leal
 */

#include "Estudiante.h"

Estudiante::Estudiante()
{	// TODO Auto-generated constructor stub
	cedula = "*";
	edad = 0;
}

void Estudiante::setSexo(char elSx)
{
	sexo = elSx;
}



char Estudiante::getSexo()
{
	return sexo;
}



void Estudiante::setCedula(string laCI)
{
	cedula = laCI;
}



string Estudiante::getCedula()
{
	return cedula;
}



void Estudiante::setEdad(int laEd)
{
	edad = laEd;
}



int Estudiante::getEdad()
{
	return edad;
}



