/*
 * VEmpresa.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VEmpresa.h"

VEmpresa::VEmpresa()
{
	// TODO Auto-generated constructor stub

}

void VEmpresa::ImprimirEmpresa(int total,int cant)
{
	cout<<"Datos de la Empresa ";
	cout<<"==================================================================";
	cout<<"Empleados que se iran de vacaciones antes del 15 de Agosto"<<total<<endl;
	cout<<"Cantidad de empleados que recibieron bonos: "<<cant<<endl;
}
