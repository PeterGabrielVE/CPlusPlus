/*
 * VAlumno.h
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef VALUMNO_H_
#define VALUMNO_H_

#include <iostream>
// no hace falta est libreria #include <iomanip> porq no se va a imprimir un float
#include <string>
#include <cstdlib>

using namespace std;

class VAlumno
{
public:
	VAlumno();
	string leerCed ();
	string leerNom ();
	float leerNota ();
	void ImprimirOperario (string c, string n, string letra);
};

#endif /* VALUMNO_H_ */
