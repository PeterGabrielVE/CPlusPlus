/*
 * Alumno.h
 *
 *  Created on: 25/05/2012
 *      Author: Gabriel Leal
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <string>
using namespace std;

class Alumno
{
private:
	string cedula;
	char sexo;
	int nota;
public:
	Alumno();
	void asignarCedula(string laCedula);
	string obtenerCedula();
	void asignarSexo(char elSexo);
	char obtenerSexo();
	void asignarNota(int laNota);
	int obtenerNota();
};

#endif /* ALUMNO_H_ */
