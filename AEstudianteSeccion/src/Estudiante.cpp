/*
 * Estudiante.cpp
 *
 *  Created on: 18/07/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Estudiante.h"

Estudiante::Estudiante()
{
	nota=0.00;
	sexo='*';
	edad=0;

}

void Estudiante::setNota(float laNota)
{
	nota=laNota;
}



float Estudiante::getNota()
{
	return nota;
}



void Estudiante::setSexo(char elSexo)
{
	sexo=elSexo;
}



char Estudiante::getSexo()
{
	return sexo;
}



void Estudiante::setEdad(int laEdad)
{
	edad=laEdad;
}



int Estudiante::getEdad()
{
	return edad;
}


