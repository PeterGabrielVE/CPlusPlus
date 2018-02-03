/*
 * Paciente.cpp
 *
 *  Created on: 06/02/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Paciente.h"

Paciente::Paciente() {
	// TODO Auto-generated constructor stub

}

void Paciente::setNombre(string elNombre)
{
	Nombre=elNombre;
}



string Paciente::getNombre()
{
	return Nombre;
}



void Paciente::setEdad(int laEdad)
{
	Edad=laEdad;
}



int Paciente::getEdad()
{
	return Edad;
}



void Paciente::setAltura(float laAltura)
{
	Altura=laAltura;
}



float Paciente::getAltura()
{
	return Altura;
}



void Paciente::setPeso(float elPeso)
{
	Peso=elPeso;
}



float Paciente::getPeso()
{
	return Peso;
}

float Paciente::CalcularPesoI()
{
	float PesoI;
	PesoI=Altura-100;
	return PesoI;
}





