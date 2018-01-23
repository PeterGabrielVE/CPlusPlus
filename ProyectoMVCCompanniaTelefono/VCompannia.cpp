/*
 * VCompannia.cpp
 *
 *  Created on: 03/07/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VCompannia.h"

VCompannia::VCompannia() {
	// TODO Auto-generated constructor stub

}

string VCompannia::leerNombre()
{
	string elnom;
	cout<<"\tNombre de la compa�ia:  ";
	cin.sync();
	getline(cin,elnom);
    return elnom;
}

string VCompannia::leerrif()
{
	string elr;
	cout<<"\tRIF:  ";
	cin>>elr;
	return elr;
}

string VCompannia::leerdireccion()
{
	string dir;
	cout<<"\tDireccion:  ";
	cin>>dir;
	return dir;
}

void VCompannia::Imprimirllamadas(string nombc,string rif, string direccion,float mtotal, string tipollamf)
{
	system("cls");
cout<<"\tReporte diario:";
cout<<"\t====================\t"<<endl;
cout<<"\t\tCompa�ia: "<<nombc<<endl;
cout<<"\t\tRif:  "<<rif<<endl;
cout<<"\t\tDireccion:  "<<direccion<<endl;
cout<<"\t\tMonto total: "<<setiosflags(ios::fixed)
			<<setprecision(2)<<mtotal<<endl;
cout<<"\t\tTipo de llamada con mayor frecuencia:"<<tipollamf<<endl;
	system("pause");

}


