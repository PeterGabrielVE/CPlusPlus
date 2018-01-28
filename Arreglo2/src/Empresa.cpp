/*
 * Empresa.cpp
 *
 *  Created on: 13/07/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Empresa.h"
#include <iostream>

Empleado Empresa::getAEmpleados(int pos)
{
         return AEmpleados[pos];
}

string Empresa::getNombre()
{
        return nombre;
}

int Empresa::getPtr()
{
    return ptr;
}

string Empresa::getRif()
{
    return rif;
}

void Empresa::setAEmpleados(Empleado elEmpleado)
{
    AEmpleados[ptr] = elEmpleado;
    ptr++;
}

void Empresa::setNombre(string elNombre)
{
     nombre = elNombre;
}

void Empresa::setPtr(int elPtr)
{
     ptr = elPtr;
}

void Empresa::setRif(string elRif)
{
     rif = elRif;
}

Empresa::Empresa()
{
 ptr = 0;
}

Empleado Empresa::determinarPeor()
{
   int posPeor=0;
   for (int i=1; i<ptr; i++)
{
   if (AEmpleados[i].getSueldo() < AEmpleados[posPeor].getSueldo())
   posPeor = i;
}
return AEmpleados[posPeor];
}



