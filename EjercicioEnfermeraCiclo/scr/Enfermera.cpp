/*
 * Enfermera.cpp
 *
 *  Created on: 21/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Enfermera.h"

Enfermera::Enfermera() {
	// TODO Auto-generated constructor stub

}

void Enfermera::asignarCedula(string Ced)
{
	Cedula = Ced;
}



void Enfermera::asignarNHijos(int NH)
{
		NHijos = NH;
}



void Enfermera::asignarEdad(int E)
{
	Edad = E;
}



void Enfermera::asignarSueldoB(float SB)
{
	SueldoB = SB;
}



string Enfermera::obtenerCedula()
{
	return Cedula;
}



int Enfermera::obtenerNHijos()
{
	return NHijos;
}



int Enfermera::obtenerEdad()
{
	return Edad;
}



float Enfermera::obtenerSueldoB()
{
	return SueldoB;
}

float Enfermera::CalAumentoH()
{
	float AumentoH=0;
	if((Edad >50)&& (NHijos >3)){
	AumentoH = NHijos*17;
	}else
	if((Edad>= 40) &&(Edad<=50) &&(NHijos <3)){
		AumentoH = NHijos*16;
	}
	else if((Edad<40) &&(NHijos ==3)){
		AumentoH = NHijos*15;
	}
	return AumentoH;

}



float Enfermera::CalAumentoS()
{
	float AumentoS;
	if(SueldoB >700)
		AumentoS = SueldoB*0.15;
	if(SueldoB<=700)
		AumentoS = SueldoB*0.10;
	return AumentoS;
}



float Enfermera::CalNuevoS()
{
	float NuevoS;
	NuevoS = SueldoB + CalAumentoH() + CalAumentoS();
	return NuevoS;
}





