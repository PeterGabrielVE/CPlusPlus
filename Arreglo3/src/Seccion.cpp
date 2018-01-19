/*
 * Seccion.cpp
 *
 *  Created on: 01/02/2013
 *  Author: Gabriel Leal
 */

#include "Seccion.h"

Seccion::Seccion()
{
	ptr=0;
}

void Seccion::setPtr(int elPtr)
{
	ptr=elPtr;
}

int Seccion::getPtr()
{
	return ptr;
}

void Seccion::setAlumno(Alumno elAlumno)
{
		arrAlumno[ptr]=elAlumno;
		ptr++;

}

Alumno Seccion::getAlumno(int i)
{
	return arrAlumno[i];
}

float Seccion::calcProm()
{
	float suma=0;

	for (int i=0; i<ptr; i++)
	{
		suma=suma+arrAlumno[i].getNota();
	}

	return suma/ptr;
}

int Seccion::contarAlumSP()
{
	float prom=calcProm();
	int cantidad=0;

	for (int i=0; i<ptr; i++)

		if (arrAlumno[i].getSexo()=='F' and arrAlumno[i].getNota()>prom)
			cantidad++;

	return cantidad;
}




