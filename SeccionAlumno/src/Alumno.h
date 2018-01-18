/*
 * Alumno.h
 *
 *  Created on: 18/1/2018
 *      Author: Gabriel
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <string>

using namespace std;

class Alumno {

private:
	string nombre;
	int edad;

public:
	Alumno();
	void setEdad(int laEdad);
	int getEdad();
	void setNombre(string elNombre);
	string getNombre();
	string determinarCodicion();
};

#endif /* ALUMNO_H_ */
