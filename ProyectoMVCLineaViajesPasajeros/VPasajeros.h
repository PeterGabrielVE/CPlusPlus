/*
 * VPasajeros.h
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VPASAJEROS_H_
#define VPASAJEROS_H_
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class VPasajeros {
public:
	VPasajeros();
	string LeerCedula();
	int LeerEdad();
    int Leersexo();
};

#endif /* VPASAJEROS_H_ */
