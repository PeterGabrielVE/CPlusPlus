/*
 * Enfermera.h
 *
 *  Created on: 21/05/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef ENFERMERA_H_
#define ENFERMERA_H_

#include <iostream>
#include <string>
using namespace std;

class Enfermera
{
private:
	string Cedula;
	int NHijos;
	int Edad;
	float SueldoB;

public:
	Enfermera();
	void asignarCedula(string Ced);
	void asignarNHijos(int NH);
	void asignarEdad(int E);
	void asignarSueldoB(float SB);
	string obtenerCedula();
	int obtenerNHijos();
	int obtenerEdad();
	float obtenerSueldoB();
	float CalAumentoH();
	float CalAumentoS();
	float CalNuevoS();

};

#endif /* ENFERMERA_H_ */
