/*
 * MLlamada.cpp
 *
 *  Created on: 02/07/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MLlamada.h"

MLlamada::MLlamada() {
	// TODO Auto-generated constructor stub

}

void MLlamada::setduracion(float d)
{
	duracion=d;
}

float MLlamada::getduracion()
{
	return duracion;
}



void MLlamada::settipo(int t)
{
	tipo=t;
}

int MLlamada::gettipo()
{
	return tipo;
}

float MLlamada::calcmontollamada()
{
float monto;
if(tipo==1)
	monto = 0.06 * duracion;
else
	if(tipo==2)
	monto= 0.50 * duracion;
	else
monto = 0.30 * duracion;
return monto;

}

int MLlamada::getcontadorllamadas()
{
	return contllamada;
}

string MLlamada::tipollamadas()
{
if(tipo==1)
	return " Local";
else
if(tipo == 2)
return " Internacional";
else
return "Celular";

}





