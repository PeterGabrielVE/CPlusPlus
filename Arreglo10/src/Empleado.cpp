/*
 * Empleado.cpp
 *
 *  Created on: 25/02/2013
 *  Author: Gabriel Leal
 */

#include "Empleado.h"

Empleado::Empleado() {
}

void Empleado::setCedula(string laCedula)
{
	Cedula=laCedula;
}



string Empleado::getCedula()
{	return Cedula;
}



void Empleado::setTipoE(string elTipo)
{
	TipoE=elTipo;
}



string Empleado::getTipoE()
{
	return TipoE;
}



void Empleado::setSueldo(float elSueldo)
{
	Sueldo=elSueldo;
}



void Empleado::InicializarE()
{
	TipoE="";
	Cedula="";
	Sueldo=0.0;
}

float Empleado::getSueldo()
{
	return Sueldo;
}



