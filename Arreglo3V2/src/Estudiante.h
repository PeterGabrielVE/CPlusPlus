/*
 * Estudiante.h
 *
 *  Created on: 15/07/2012
 *      Author: Pedro Leal
 */

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include <string>
using namespace std;

class Estudiante
{
private:
	char sexo;
	string cedula;
	int edad;
public:
	Estudiante();
	void setSexo (char elSx);
	char getSexo ();
	void setCedula (string laCI);
	string getCedula ();
	void setEdad (int laEd);
	int getEdad ();

};

#endif /* ESTUDIANTE_H_ */
