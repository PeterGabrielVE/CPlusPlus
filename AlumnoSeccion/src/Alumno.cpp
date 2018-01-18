/*
 * Alumno.cpp
 *
 *  Created on: 25/05/2012
 *      Author: Gabriel Leal
 */

#include "Alumno.h"


Alumno::Alumno() {


	// TODO Auto-generated constructor stub
    nota=0;

}

void Alumno::asignarCedula(string laCedula)
{
	cedula = laCedula;
}


string Alumno::obtenerCedula()
{
	return cedula;
}



void Alumno::asignarSexo(char elSexo)
{
	sexo = elSexo;
}



char Alumno::obtenerSexo()
{
	return sexo;
}



void Alumno::asignarNota(int laNota)
{
	nota = laNota;
}



int Alumno::obtenerNota()
{
	return nota;
}



