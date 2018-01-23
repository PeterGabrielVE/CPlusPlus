/*
 * VCliente.h
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#ifndef VCLIENTE_H_
#define VCLIENTE_H_
#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;

class VCliente
{
public:
	VCliente();
	long LeerCedula();
	int LeerCantDias();
	int LeerTipoHospedaje();
    void ImprimirCliente(long cedu,int CantD, float MontoCanc);
};

#endif /* VCLIENTE_H_ */
