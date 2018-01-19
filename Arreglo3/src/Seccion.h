/*
 * Seccion.h
 *
 *  Created on: 01/02/2013
 *  Author: Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_

#include "Alumno.h"

int const MAX=4;

class Seccion
{
private:
	Alumno arrAlumno[MAX];
	int ptr;
public:
	Seccion();
	void setPtr(int elPtr);
	int getPtr();
	void setAlumno(Alumno elAlumno);
	Alumno getAlumno(int i);
	float calcProm();
	int contarAlumSP();
};

#endif /* SECCION_H_ */
