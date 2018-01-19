/*
 * Vuelos.cpp
 *
 *  Created on: 22/06/2012
 *  Author: Pedro Gabriel Leal
 */

#include "Vuelos.h"
#include <string>

using namespace std;

Vuelos::Vuelos() 
{
}

void Vuelos::setNumVuelo(string elNumV)
{
	numVuelo = elNumV;
}



string Vuelos::getNumVuelo()
{
	return numVuelo;
}



void Vuelos::setTipoVuelo(char elTipoV)
{
	tipoVuelo = elTipoV;
}



char Vuelos::getTipoVuelo()
{
	return tipoVuelo;
}



void Vuelos::setCostoPasaje(float elCostoP)
{
	costoPasaje = elCostoP;
}



float Vuelos::getCostoPasaje()
{
	return costoPasaje;
}



void Vuelos::setNumPasajeros(int elNumPj)
{
	numPasajeros = elNumPj;
}



int Vuelos::getNumPasajeros()
{
	return numPasajeros;
}



float Vuelos::calcularIngreso()
{
	float Ingreso;
	Ingreso = costoPasaje * numPasajeros;
	return Ingreso;
}

string Vuelos::determinarCondicion(Vuelos losVl)
{
	string mensaje;
	if (losVl.getTipoVuelo() == 'I')
		mensaje = "Es Internacional";
	else
		mensaje = "Es Nacional";

	return  mensaje;
}





	// TODO Auto-generated constructor stub
