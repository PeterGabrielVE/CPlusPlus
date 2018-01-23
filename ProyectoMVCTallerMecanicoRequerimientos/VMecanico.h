/*
 * VMecanico.h
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#ifndef VMECANICO_H_
#define VMECANICO_H_
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class VMecanico
{
public:
	 VMecanico();
	 long LeerCedula();
	 string LeerNombre();
	 int LeerCantidadReparaciones();
	 void ImprimirMecanico(long c, string n, float co, float maymontocomis);
};

#endif /* VMECANICO_H_ */
