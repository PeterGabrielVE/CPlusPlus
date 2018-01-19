/*
 * Grupo.cpp
 *
 *  Created on: 21/05/2012
 *  Author: Pedro Gabriel Leal
 */

#include "Grupo.h"

Grupo::Grupo() {
	// TODO Auto-generated constructor stub
	contHM21 = 0;
	contMNM = 0;
	contMME = 0;
	contMMECH = 0;
	acumHijos = 0;
}

void Grupo::asignarContHM21(int elContHM21)
{
	contHM21 = elContHM21;
}



int Grupo::obtenerContHM21()
{
	return contHM21;
}



void Grupo::asignarContMNM(int elContMNM)
{
	contMNM = elContMNM;
}



int Grupo::obtenerContMNM()
{
	return contMNM;
}



void Grupo::asignarContMME(int elContMME)
{
	contMME = elContMME;
}



int Grupo::obtenerContMME()
{
	return contMME;
}



void Grupo::contarHM21(Persona laPersona)
{
	if (laPersona.obtenerSexo() == 'H' and laPersona.obtenerEdad() < 21)
		contHM21 = contHM21 + 1;
}



void Grupo::contarMNM(Persona laPersona)
{
	if (laPersona.obtenerSexo() == 'M' and laPersona.obtenerCantHijos() == 0)
		contMNM = contMNM + 1;
}



void Grupo::contarMME(Persona laPersona)
{
	if (laPersona.obtenerSexo()== 'M' and laPersona.obtenerCantHijos() > 0 and laPersona.obtenerEdad() < 18)
		contMME = contMME + 1;
}



void Grupo::asignarAcumHijos(int elAcumHijos)
{
	acumHijos = elAcumHijos;
}

int Grupo::obtenerAcumHijos()
{
	return acumHijos;
}

void Grupo::asignarContMMECH(int elContMMECH)
{
	contMMECH = elContMMECH;
}

int Grupo::obtenerContMMECH()
{
	return contMMECH;
}

void Grupo::contarMMECH(Persona laPersona)  //Metodo Contar de Madres Menores de edad con 2 o mas hijos
{
	if (laPersona.obtenerSexo () == 'M' and laPersona.obtenerEdad () < 18 and laPersona.obtenerCantHijos () >= 2)
	contMMECH = contMMECH + 1;
}

void Grupo::acumularHijos(Persona laPersona)
{
	acumHijos = acumHijos + laPersona.obtenerCantHijos();
}



