/*
 * VCompetencia.cpp
 *
 *  Created on: 05/11/2012
 *      Author: Pedro Gabriel Leal
 */

#include "VCompetencia.h"

VCompetencia::VCompetencia() {
	// TODO Auto-generated constructor stub

}

int VCompetencia::LeerEstilo()
{
	int est;
	do
	{
		cout<<"\tEstilo (1) Mariposa, (2) Espalda, (3) Pecho (4) Libre: ";
		cin>>est;
		if(est<1 or est>4)
		 cout<<"Dato no valido!"<<endl;
	}
	while(est<1 or est>4);
	return est;
}

float VCompetencia::LeerTiempo()
{
	float t;
		do
		{
			cout<<"\tTiempo: ";
			cin>>t;
			if(t <=0.00)
			  cout<<"Dato no valido!"<<endl;
		}
		while(t <= 0);
		return t;
}

int VCompetencia::LeerLugar()
{
	int lug;
	do
	{
		cout<<"\tLugar: ";
		cin>>lug;
		if(lug <=0)
		 cout<<"Dato no valido!"<<endl;
	}
	while(lug<=0);
	return lug;
}
