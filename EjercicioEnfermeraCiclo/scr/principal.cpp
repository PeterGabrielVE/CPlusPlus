/*
 * principal.cpp
 *
 *  Created on: 21/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include <string>
#include <iostream>
#include <stdlib.h>
#include "Enfermera.h"

using namespace std;
void IEEnfermera(Enfermera &enfermera);
void ISEnfermera(Enfermera enfermera);

int main()
{
	Enfermera enfermera;
	IEEnfermera(enfermera);
	ISEnfermera(enfermera);
	return 0;

}

void IEEnfermera(Enfermera &enfermera)
{
	string Ced;
	int NH;
	int E;
	float SB;
	cout<< "====== Clinica Razzeti ===== " <<endl;
	cout<< "============================" <<endl;
	cout<< "Ingrese la Cedula: " <<endl;
	cin>> Ced;
	enfermera.asignarCedula(Ced);
	cout<<"Ingrese el Numero de Hijos: " <<endl;
	cin>> NH;
	enfermera.asignarNHijos(NH);
	cout<< "Ingrese la Edad: " <<endl;
	cin>>E;
	enfermera.asignarEdad(E);
	cout<< "Ingrese el Sueldo Base: " <<endl;
	cin>>SB;
	enfermera.asignarSueldoB(SB);
}

void ISEnfermera(Enfermera enfermera)
{
	cout<< "El Aumento por Hijos es:" << enfermera.CalAumentoH()<<" $ " <<endl;
	cout<< "El Aumento del Sueldo Base es:" << enfermera.CalAumentoS() <<" $ " <<endl;
	cout<< "El Nuevo Sueldo es:" << enfermera.CalNuevoS()<<" $ "<<endl;
	system("pause");

}
