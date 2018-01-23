/*
 * MPasajeros.h
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MPASAJEROS_H_
#define MPASAJEROS_H_
#include <string>
using namespace std;

class MPasajeros {
private:
	string cedula;
	int edad, sexo;

public:
	MPasajeros();
	void SetCedula(string c);
	string GetCedula();
	void SetEdad(int e);
	int GetEdad();
	void SetSexo(int s);
	int GetSexo();
};

#endif /* MPASAJEROS_H_ */
