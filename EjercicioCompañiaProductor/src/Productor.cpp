/*
 * Productor.cpp
 *
 *  Created on: 04/03/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Productor.h"

Productor::Productor() {
	// TODO Auto-generated constructor stub

}

void Productor::setCedula(string ced)
{
	Cedula=ced;
}



string Productor::getCedula()
{
	return Cedula;
}



void Productor::setMontoHCM(float MHcm)
{
	MontoHCM=MHcm;
}



float Productor::getMontoHCM()
{
	return MontoHCM;
}



void Productor::setMontoVida(float MVid)
{
	MontoVida=MVid;
}



float Productor::getMontoVida()
{
	return MontoVida;
}

void Productor::setMontoCobrar(float MCobrarAux)
{
	MontoCobrar=MCobrarAux;
}



float Productor::getMontoCobrar()
{
	return MontoCobrar;
}





