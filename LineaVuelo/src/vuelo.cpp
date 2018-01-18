/*
 * vuelo.cpp
 *
 *  Created on: 17/06/2012
 *  Author: Gabriel Leal
 */

#include "vuelo.h"

vuelo::vuelo()
{
	// TODO Auto-generated constructor stub

}

int vuelo::obtenernumv()
{
	return numv;
}



char vuelo::obtenertipov()
{
	return tipov;
}



int vuelo::obtenercantp()
{
	return cantp;
}



float vuelo::obtenercostop()
{
	return costop;
}



void vuelo::asignarnumv(int elnumv)
{
	numv = elnumv;
}



void vuelo::asignartipov(char eltipov)
{
	tipov = eltipov;
}



void vuelo::asignarcantp(int lacantp)
{
	cantp = lacantp;
}



void vuelo::asignarcostop(float elcostop)
{
	costop = elcostop;
}

float vuelo::calcularing()
{
	float eling;
	eling = cantp * costop;
	return eling;
}


