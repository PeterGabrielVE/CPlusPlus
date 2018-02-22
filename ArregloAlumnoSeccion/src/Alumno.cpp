/*
 * Alumno.cpp
 *
 *  Created on: 24/01/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Alumno.h"

Alumno::Alumno() {
	// TODO Auto-generated constructor stub

}



/* Realizando metodos del Alumno */

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





