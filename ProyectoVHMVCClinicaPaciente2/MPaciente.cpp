/*
 * MPaciente.cpp
 *
 *  Created on: 27/01/2014
 *      Author: Pedro Gabriel Leal
 */

#include "MPaciente.h"

MPaciente::MPaciente() {
	// TODO Auto-generated ructor stub

}

void MPaciente::SetMotivoV(int mo)
{
	motivoV=mo;
}



void MPaciente::SetTurno(int tur)
{
	turno=tur;
}



void MPaciente::SetMontoC(float mon)
{
	montoC=mon;
}



int MPaciente::GetMotivoV()
{
	return motivoV;
}



int MPaciente::GetTurno()
{
	return turno;
}



void MPaciente::setDia(int di)
{
	dia=di;
}

float MPaciente::GetMontoC()
{
	return montoC;
}

int MPaciente::GetDia()
{
	return dia;
}








