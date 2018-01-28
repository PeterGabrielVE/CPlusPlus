/*
 * Seccion.cpp
 *
 *  Created on: 20/07/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Seccion.h"

Alumno Seccion::getAAlumno(int i)
{
return AAlumno[i];
}
int Seccion::getPtr()
{
return ptr;
}

void Seccion::setAAlumno(Alumno elAlumno)
{
AAlumno[ptr] = elAlumno;
ptr++;
}

void Seccion::setPtr(int elPtr)
{
ptr = elPtr;
}
Seccion::Seccion()
{
ptr = 0;
}
float Seccion::calcularDefinitiva(Alumno elAlumno)
{
float definitiva;
definitiva = elAlumno.getNota1() + elAlumno.getNota2() + elAlumno.getNota3();
return definitiva;
}
Alumno Seccion::determinarMejor()
{
int posMejor = 0;
for(int i=1; i<ptr; i++)
{
if (calcularDefinitiva(AAlumno[i]) > calcularDefinitiva(AAlumno[posMejor]))
posMejor = i;
}
return AAlumno[posMejor];
}
int Seccion::contarAplazados()
{
int contAplaz = 0;
for(int i=0; i<ptr; i++)
{
if (calcularDefinitiva(AAlumno[i]) < 48)
contAplaz++;
}
return contAplaz;
}
float Seccion::calcularPorcAprob()
{
int contAprob = 0;
float porcAprob = 0.0;
for(int i=0; i<ptr; i++)
{
if (calcularDefinitiva(AAlumno[i]) >= 48)
contAprob++;
}
if (ptr > 0)
porcAprob = contAprob*100/ptr;
return porcAprob;
}
float Seccion::calcularPromGral()
{
float acumNotas = 0.0;
float promGral = 0.0;
for(int i=0; i<ptr; i++)
{
acumNotas = acumNotas + calcularDefinitiva(AAlumno[i]);
}
if (ptr > 0)
promGral = acumNotas/ptr;
return promGral;
}



