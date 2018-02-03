/*
 * Cliente.cpp
 *
 *  Created on: 23/02/2013
 *      Author: Gabriel
 */

#include "Cliente.h"

Cliente::Cliente()
{
	ValorI=0;
	ValorF=0;

}

void Cliente::setCedula(long laCedula)
{
	Cedula=laCedula;
}



long Cliente::getCedula()
{
	return Cedula;
}



void Cliente::setValorI(float elValorI)
{
	ValorI=elValorI;
}



float Cliente::getValorI()
{
	return ValorI;
}



void Cliente::setValorF(float elValorF)
{
	ValorF=elValorF;
}



float Cliente::getValorF()
{
	return ValorF;
}



void Cliente::setCantMax(float laCantM)
{
	CantMax=laCantM;
}



float Cliente::getCantMax()
{
	return CantMax;
}



