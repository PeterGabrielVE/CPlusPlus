/*
 * Seccion.h
 *
 *  Created on: 18/07/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_
#include "Estudiante.h"
int const MAX=3;

class Seccion {
private:
	Estudiante AEstudiante[MAX];
	int ptr;
public:
	Seccion();
	void setPtr(int elPtr);
	int getPtr();
	void setAEstudiante(Estudiante elEstudiante);
	Estudiante getAEstudiante(int i);
	float promediarN();
	//int mayorNota();
	float calcularPorc();
};

#endif /* SECCION_H_ */
