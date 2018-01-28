/*
 * Seccion.h
 *
 *  Created on: 15/07/2012
 *      Author: Pedro Leal
 */

#ifndef SECCION_H_
#define SECCION_H_

#include "Estudiante.h"

int const MAX = 5;

class Seccion
{
private:
	Estudiante AEstudiante[MAX];
	int ptr;

public:
	Seccion();
	void setAEstudiante (Estudiante elE);
	Estudiante getAEstudiante (int pos);
	int getPtr ();
	float calPorcSF (); //elE: elEstudiante.
	Estudiante determinarMayor ();
	Estudiante determinarMenor ();
	int contAM ();
	float promediarEdad();
	int contarEMP ();
};

#endif /* SECCION_H_ */
