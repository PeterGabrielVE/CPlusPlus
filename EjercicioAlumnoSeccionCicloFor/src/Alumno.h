/*
 * Alumno.h
 *
 *  Created on: 22/06/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <string.h>
#include <iostream>

using namespace std;
class Alumno
{
private:
	int Cedula;
	char Sexo;
	float Nota;
public:
	Alumno();
	void AsignarCedula (int laCed);
		int ObtenerCedula ();
		void AsignarSexo (char elSexo);
		char ObtenerSexo ();
		void AsignarNota (float laNota);
		float ObtenerNota ();
		string CalNotaL ();
};

#endif /* ALUMNO_H_ */
