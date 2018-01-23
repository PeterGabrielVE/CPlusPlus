/*
 * VPasajeros.cpp
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VPasajeros.h"

VPasajeros::VPasajeros() {
	// TODO Auto-generated constructor stub

}

string VPasajeros::LeerCedula()
{
   string c;
   cout << "\n\n\tCedula: ";
   cin >> c;
   return c;
}

int VPasajeros::LeerEdad()
{
	float ed;
	do
	{
		cout<<"\tEdad : ";
		cin>>ed;
		if(ed <=0)
			cout<<"Dato no valido!"<<endl;
	}
	while(ed <= 0);
	return ed;
}

int VPasajeros::Leersexo()
{
	float sex;
	do
	{
		cout<<"\tSexo > (1)femenino (2)masculino: ";
		cin>>sex;
		if(sex <1 or sex >2)
			cout<<"Dato no valido!"<<endl;
	}
			while(sex <1 or sex >2);
	return sex;
}
