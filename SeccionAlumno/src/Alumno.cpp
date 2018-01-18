/*
 * Alumno.cpp
 *
 *  Created on: 18/1/2018
 *      Author: Gabriel Leal
 */

#include "Alumno.h"

Alumno::Alumno() {
	// TODO Auto-generated constructor stub
edad=0;

}

void Alumno::setEdad(int laEdad) {
	edad=laEdad;
}

int Alumno::getEdad() {
	return edad;
}

void Alumno::setNombre(string elNombre) {

	nombre=elNombre;
}

string Alumno::getNombre() {
	return nombre;
}

string Alumno::determinarCodicion() {

	if (getEdad()>=18){
		return "Es mayor de edad";
	}
	else{
		return "Es menor de edad";
	}
}
