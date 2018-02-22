/*
 * Alumno.h
 *
 *  Created on: 24/01/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include <iostream>
#include <string.h>

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
