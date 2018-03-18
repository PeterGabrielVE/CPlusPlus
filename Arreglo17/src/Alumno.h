/*
 * Alumno.h
 *
 *  Created on: 16/03/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <string>

using namespace std;

class Alumno
{
private:
	int Nota;
	string Nombre;


public:
	Alumno();
	void setNota(int laNota);
	int getNota();
	void setNombre(string elNombre);
	string getNombre();
};

#endif /* ALUMNO_H_ */
