/*
 * Persona.cpp
 *
 *  Created on: 21/05/2012
 *  Author: Pedro Gabriel Leal
 */

#include "Persona.h"

Persona::Persona() {
	// TODO Auto-generated constructor stub

}

void Persona::asignarEdad(int laEdad)
{
	edad = laEdad;
}



int Persona::obtenerEdad()
{
	return edad;
}



void Persona::asignarSexo(char elSexo)
{
	sexo = elSexo;
}



char Persona::obtenerSexo()
{
	return sexo;
}



void Persona::asignarCantHijos(int laCantHijos)
{
	cantHijos = laCantHijos;
}



int Persona::obtenerCantHijos()
{
	return cantHijos;
}



