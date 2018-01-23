/*
 * VAlumno.cpp
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#include "VAlumno.h"

VAlumno::VAlumno() {
}

string VAlumno::leerCed()
{
	string c;
	cout <<"Introduzca su Cedula:";
	cin >> c;
	return c;
}
string VAlumno::leerNom()
{
	string n;
	cout <<"Nombre del Alumno:";
	// asi no...cin >> n;, es asi:
	cin.sync();
	getline(cin, n);
	return n;
}
float VAlumno::leerNota()
{
	float no;
	do
	{
	cout <<"Nota: (Escala de 0 a 20)";
	cin >> no;
	if (no < 0 or no > 20)
		cout <<"\nDato NO Valido:";
	//asi no ->}while (no < 0); asi si:
	}while (no < 0 or no > 20);
	return no;
}
void VAlumno::ImprimirOperario(string c, string n, string letra)
{
	system ("cls");
	cout <<"\n\t\tINFORMACION DEL ALUMNO:"<< endl;
	cout <<"\t\t=======================\n"<< endl;
	cout <<"\n\tNombre:"<< n << endl;
	cout << "\n\tCedula:"<< c << endl;
	cout <<"\n\tLetra:"<< letra << endl;
	system ("pause");
}



