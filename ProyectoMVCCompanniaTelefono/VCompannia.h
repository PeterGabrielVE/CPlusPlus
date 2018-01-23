/*
 * VCompannia.h
 *
 *  Created on: 03/07/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VCOMPANNIA_H_
#define VCOMPANNIA_H_
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

class VCompannia {
public:
	VCompannia();
	string leerNombre();
	string leerrif();
	string leerdireccion();
	void Imprimirllamadas(string nombc,string rif, string direccion,float mtotal, string tipollamf);
};

#endif /* VCOMPANNIA_H_ */
