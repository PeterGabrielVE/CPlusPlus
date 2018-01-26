/*
 * VEmpleado.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VEmpleado.h"

VEmpleado::VEmpleado() {


}

void VEmpleado::ImprimirEmpleado(string ced, string nom, int diasdisf,
		float suevac) {
	cout<<"\n\n\aDatos del Empleado";
	cout<<"============================================================================";
	cout<<"Cedula:  "<<ced<<endl;
	cout<<"Nombre:  "<<nom<<endl;
	cout<<"Dias de Vacaciones:  "<<diasdisf<<endl;
	cout<<"Sueldo Vacacional:  "<<setiosflags(ios::fixed)<<setprecision(2)<<suevac<<endl;
}


