/*
 * VCompannia.cpp
 *
 *  Created on: 20/09/2014
 *      Author: Gabriel
 */

#include "VCompannia.h"

VCompannia::VCompannia()
{
	// TODO Auto-generated constructor stub

}

void VCompannia::ImprimirCompannia(float montoF)
{
	system("cls");
	cout<<"\t\t\tInformacion de la compa�ia \n";
	cout<<"\t\t\t======================\n\n";
	cout<<"Capital final durante el per�odo vacacional por el concepto de alquiler de caba�as: "<<setiosflags(ios::fixed)<<setprecision(2)<<montoF<<endl;
	system("pause");
}



