/*
 * Empleado.cpp
 *
 *  Created on: 13/07/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Empleado.h"

string Empleado::getCedula()
{
       return cedula;
}

string Empleado::getNombre()
{
       return nombre;
}

float Empleado::getSueldo()
{
      return sueldo;
}

void Empleado::setCedula(string laCedula)
{
     cedula = laCedula;
}

void Empleado::setNombre(string elNombre)
{
     nombre = elNombre;
}

void Empleado::setSueldo(float elSueldo)
{
     sueldo = elSueldo;
}

Empleado::Empleado()
{
    cedula ="*";
    nombre = "*";
    sueldo = 0.0;

}





