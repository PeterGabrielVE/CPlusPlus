/*
 * Polizas.cpp
 *
 *  Created on: 07/03/2013
 *      Author: Gabriel
 */

#include "Polizas.h"

Polizas::Polizas() {

	Nombre="*";
	TipoP='"';
	MontoHCM=0.00;
	MontoVida=0.00;
}

void Polizas::setCedula(string laCedula)
{
	Cedula=laCedula;
}

string Polizas::getCedula()
{
	return Cedula;
}

void Polizas::setNombre(string elNombre)
{
	Nombre=elNombre;
}

string Polizas::getNombre() {
	return Nombre;
}

void Polizas::setTipoP(char elTipo)
{
	TipoP=elTipo;
}

char Polizas::getTipoP()
{
	return TipoP;
}

void Polizas::setMontoHCM(float elMontoHCM)
{
	MontoHCM=elMontoHCM;
}

float Polizas::getMontoHCM()
{
	return MontoHCM;
}




float Polizas::CalComision()
{
	float Comision;
	if(CalcMontoTotal()<100000)
		Comision=CalcMontoTotal()*0.03;
	else
		Comision=CalcMontoTotal()*0.05;

		return Comision;
}

void Polizas::setCantPolizaV(int laCantPV)
{
	CantPolizaV=laCantPV;
}

int Polizas::getCantPolizaV()
{
	return CantPolizaV;
}

float Polizas::CalcMontoVida()
{
	float MontoVida;
	MontoVida=CantPolizaV*2000;
	return MontoVida;

}

float Polizas::CalcMontoTotal()
{
	float MontoTotal;
	MontoTotal=MontoHCM+MontoVida;
	return MontoTotal;
}

float Polizas::DetBonificacion()
{
	float Bonificacion;
	if(CantPolizaV>5)
	{
		Bonificacion=185;
	}
	else
		Bonificacion=0.00;
	return Bonificacion;
}








