/*
 * MLijadora.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MLijadora.h"

MLijadora::MLijadora() {
	// TODO Auto-generated constructor stub
}

void MLijadora::SetCantlijas(int cantl)
{
    cantlijas = cantl;
}

int MLijadora::GetCantlijas()
{
    return cantlijas;
}

float MLijadora::CalcMontoLijas()
{
	return 20 * cantlijas;
}

float MLijadora::CalcDescuento()
{
	if (cantlijas > 3)
	 return CalcMontoLijas() * 0.1275;
	else
     return 0;
}

float MLijadora::CalcMontoFinalAlquiler()
{
	return CalcMontoAlquiler() + CalcMontoLijas() - CalcDescuento();
}

float MLijadora::CalcIva()
{
	return CalcMontoFinalAlquiler() * 0.12;
}


//OJO
float MLijadora::CalcMontoFinalL()
{
	return CalcMontoFinalAlquiler()+ CalcIva();
}

