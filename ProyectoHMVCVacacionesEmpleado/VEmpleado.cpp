/*
 * VEmpleado.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VEmpleado.h"

VEmpleado::VEmpleado()
{
	// TODO Auto-generated constructor stub

}


void VEmpleado::ImprimirEmpleado(string ced, string nom, int diasdisf,
		float suevac) {
	cout<<"\n\n\aDatos del Empleado";
	cout<<"============================================================================";
	cout<<"Cedula:  "<<ced<<endl;
	cout<<"Nombre:  "<<nom<<endl;
	cout<<"Dias de Vacciones:  "<<diasdisf<<endl;
	cout<<"Sueldo Vacacional:  "<<setiosflags(ios::fixed)<<setprecision(2)<<suevac<<endl;
}
