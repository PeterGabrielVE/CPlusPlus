/*
 * VViaje.h
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VVIAJE_H_
#define VVIAJE_H_
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>
using namespace std;

class VViaje {
public:
	VViaje();
	string LeerPlaca();
	int LeerCuidadDestino();
	int LeerHoraSalida();
	int LeerCantidadPasajeros();
	void ImprimirViaje(string placa, string turno,float montototviaje);
};

#endif /* VVIAJE_H_ */
