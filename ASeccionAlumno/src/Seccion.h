/*
 * Seccion.h
 *
 *  Created on: 16/03/2013
 *      Author: Gabriel
 */

#ifndef SECCION_H_
#define SECCION_H_
#include "Alumno.h"

class Seccion
{
private:
	Alumno AAlumno[50];
	int ptr,MAX;
public:
	Seccion();
	Alumno getAAlumno(int i);
	bool setAAlumno(Alumno elAlumno);

	int getMAX();
	int getPtr();

	int Buscador(string elNombre); //Buscador de Alumno por nombre.

	float CalcPorcAP();


};

#endif /* SECCION_H_ */
