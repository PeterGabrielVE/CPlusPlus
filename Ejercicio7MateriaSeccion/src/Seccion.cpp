/*
 * Seccion.cpp
 *
 *  Created on: 30/01/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Seccion.h"

Seccion::Seccion() {}
	// TODO Auto-generated constructor stub

void Seccion::setCantAlum(int CantAl)
{
	CantAlum=CantAl;
}
int Seccion::getCantAlum()
{
	return CantAlum;
}
void Seccion::setEstAplazados(int EstApl)
{
	EstAplazados=EstApl;
}
int Seccion::getEstAplazados()
{
	return EstAplazados;
}
void Seccion::setNotaSec(float NotaS)
{
	NotaSec=NotaS;
}
float Seccion::getNotaSec()
{
	return NotaSec;
}
int Seccion::CalcEstAprob()
{
	int EstAp;
	EstAp=CantAlum-EstAplazados;
	return EstAp;
}
float Seccion::CalcPromSec()
{
	float PromS;
	PromS=NotaSec/CantAlum;
	return PromS;
}



