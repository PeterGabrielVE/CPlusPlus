/*
 * Seccion.h
 *
 *  Created on: 20/07/2012
 *      Author: Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_

#include "Alumno.h"
int const MAX = 3;
class Seccion
{
 private:
         Alumno AAlumno[MAX];
         int ptr;

public:
	Seccion();
	Alumno getAAlumno(int i);
	void setAAlumno(Alumno elAlumno);
	int getPtr();
	void setPtr(int elPtr);
	float calcularDefinitiva (Alumno elAlumno);
	Alumno determinarMejor();
	int contarAplazados();
	float calcularPorcAprob(); //calcular Porcentaje de Alumnos Aprobados
	float calcularPromGral(); //calcular Promedio General de Notas Definitivas de la Seccion
};

#endif /* SECCION_H_ */
