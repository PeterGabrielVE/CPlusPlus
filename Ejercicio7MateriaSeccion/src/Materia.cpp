/*
 * Materia.cpp
 *
 *  Created on: 30/01/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Materia.h"

Materia::Materia() {
	AcumProm=0;
	MenorProm=100;
	MayorAprob=0;
	ContS=0;

}

void Materia::setAcumProm(Seccion laSeccion)
{
	AcumProm=AcumProm+laSeccion.CalcPromSec();
}



float Materia::getAcumProm()
{
	return AcumProm;
}



void Materia::setMenorProm(Seccion laSeccion)
{
	if (MenorProm>laSeccion.CalcPromSec())
	{
		MenorProm=laSeccion.CalcPromSec ();
		NrSeccionMen=ContS;
	}

}



float Materia::getMenorProm()
{
	return MenorProm;
}



int Materia::getNrSeccionMen()
{
	return NrSeccionMen;
}



void Materia::setMayorAprob(Seccion laSeccion)
{
	if (MayorAprob<laSeccion.CalcEstAprob())
	{
		MayorAprob=laSeccion.CalcEstAprob();
		NrSeccionMay=ContS;
	}
}



int Materia::getMayorAprob()
{
	return MayorAprob;
}



int Materia::getNrSeccionMay()
{
	return NrSeccionMay;
}



void Materia::setContS()
{
	ContS=ContS+1;
}



int Materia::getContS()
{
	return ContS;
}

float Materia::CalcPromMat()
{
	float ProM;
	ProM=AcumProm/10;
	return ProM;
}

