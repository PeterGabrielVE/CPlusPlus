/*
 * Seccion.h
 *
 *  Created on: 16/03/2013
 *  Author: Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_
#include "Alumno.h"

int const MAX = 5;

class Seccion
{
private:
	Alumno AAlumno[MAX];
	int ptr;
	string Nombre;
	int Nota;
public:
	Seccion();
	Alumno getAAlumno(int i);
	bool setAAlumno(Alumno elAlumno);
	int getPtr();
	float CalcPorcAP();
	void OrdenarNotas();
	int BuscarNombre(string elNombre);
	void OrdenarMayor();
};

#endif /* SECCION_H_ */
