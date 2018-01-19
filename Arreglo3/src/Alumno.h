/*
 * Alumno.h
 *
 *  Created on: 01/02/2013
 *  Author: Gabriel Leal
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
	float nota;
public:
	Alumno();
	void setCedula(string laCedula);
	string getCedula();
	void setSexo(char elSexo);
	char getSexo();
	void setNota(float laNota);
	float getNota();
};

#endif /* ALUMNO_H_ */
