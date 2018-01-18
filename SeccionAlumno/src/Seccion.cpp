/*
 * Seccion.cpp
 *
 *  Created on: 18/06/2012
 *      Author: Administrador
 */

#include "Seccion.h"

Seccion::Seccion() {

	contMenores=0;
    mayor=0;

}

int Seccion::getcontMenores() {

	return contMenores;
}

int Seccion::getEdadMayor(){
	return mayor;
}

void Seccion::ContarMenores(Alumno elAlumno) {

	if(elAlumno.getEdad()<18)
	 contMenores++;

}


void Seccion::determinarMayor(Alumno elAlumno) {

	if(elAlumno.getEdad()>mayor)
        mayor=elAlumno.getEdad();

}
