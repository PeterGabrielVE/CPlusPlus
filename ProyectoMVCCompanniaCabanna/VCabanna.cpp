/*
 * VCabanna.cpp
 *
 *  Created on: 20/09/2014
 *      Author: Gabriel
 */

#include "VCabanna.h"

VCabanna::VCabanna()
{
	// TODO Auto-generated constructor stub

}

string VCabanna::LeerNombre()
{
	string n;
	cout<<" Nombre del cliente: ";
	cin>>n;
	return n;
}



float VCabanna::LeerMonto()
{
	float m;
	cout<<" Monto del alquiler:";
	cin>>m;
	return m;
}



