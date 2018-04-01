/*
 * MEmpresa.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MEmpresa.h"

MEmpresa::MEmpresa()
{
	// TODO Auto-generated constructor stub

}

void MEmpresa::SetCt(int c)
{
	ct=c;
}



int MEmpresa::GetCt()
{
	return ct;
}


void MEmpresa::setCbe(int cb)
{
	cbe=cb;
}

int MEmpresa::getCbe()
{
	return cbe;
}

/* Actualiza el contador que almacena la cantidad
de empleados que saldr�n de vacaciones antes
del 15 de agosto*/
void MEmpresa::ProcesarEmpleado(MEmpleado memp)
{
	if (memp.GetDiaIni() < 15)
	++ ct;
	if(memp.calcBonoEspecial())
		++cbe;
}



