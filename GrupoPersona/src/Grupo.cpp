/*
 * Grupo.cpp
 *
 *  Created on: 21/05/2012
 *  Author: Gabriel Leal
 */

#include "Grupo.h"

int Grupo::getAcumHijos()
{
return acumHijos;
}

int Grupo::getContHM21()
{
return contHM21;
}

int Grupo::getContMME()
{
return contMME;
}

int Grupo::getContMNM()
{
return contMNM;
}

void Grupo::setAcumHijos(int elAcumHijos)
{
acumHijos = elAcumHijos;
}

void Grupo::setContHM21(int elContH21)
{
contHM21 = elContH21;
}

void Grupo::setContMME(int elContMme)
{
contMME = elContMme;
}

void Grupo::setContMNM(int elContMnm)
{
contMNM = elContMnm;
}

Grupo::Grupo()
{
	contHM21 = 0;
	contMNM = 0;
	contMME = 0;
	acumHijos = 0;
}
void Grupo::contarHM21(Persona laPersona)
{
if (laPersona.getSexo() == 'H' and laPersona.getEdad() < 21)
contHM21 = contHM21 + 1;
}

void Grupo::contarMNM(Persona laPersona)
{
if (laPersona.getSexo() == 'M' and laPersona.getCantHijos() == 0)
contMNM = contMNM + 1;
}

void Grupo::contarMME(Persona laPersona)
{
if (laPersona.getSexo() == 'M' and laPersona.getCantHijos() > 0 and laPersona.getEdad() < 18)
contMME = contMME + 1;
}

void Grupo::acumularHijos(Persona laPersona)
{
acumHijos = acumHijos + laPersona.getCantHijos();
}



