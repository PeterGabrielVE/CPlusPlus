/*
 * Alumno.h
 *
 *  Created on: 16/03/2013
 *      Author: Gabriel
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
	int Buscador(int laNota);
};

#endif /* ALUMNO_H_ */
