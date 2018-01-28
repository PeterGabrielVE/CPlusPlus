/*
 * Seccion.h
 *
 *  Created on: 18/07/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_
#include "Estudiante.h"
int const MAX=6;

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
	float promediarN();//metodo que calcula el promedio de notas de la Secci�n
    float promediarMas();//metodo que que calcula el promedio de edad de los masculinos reprobados
	Estudiante mayorNota(); //metodo que acumula los alumnos femeninos con nota mayor al promedio de la Secci�n
	float calcularPorc();//metodo que cacula el prcentaje alumnos masculinos aprobados de la Secci�n
};

#endif /* SECCION_H_ */
