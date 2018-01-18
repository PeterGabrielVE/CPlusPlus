/*
 * Persona.cpp
 *
 *  Created on: 21/05/2012
 *  Author: Gabriel Leal
 */

#include "Persona.h"

int Persona::getCantHijos()
{
return cantHijos;
}

int Persona::getEdad()
{
return edad;
}

char Persona::getSexo()
{
return sexo;
}

void Persona::setCantHijos(int laCantHijos)
{
cantHijos = laCantHijos;
}

void Persona::setEdad(int laEdad)
{
edad = laEdad;
}

void Persona::setSexo(char elSexo)
{
sexo = elSexo;
}

Persona::Persona()
{
	// TODO Auto-generated constructor stub

}

