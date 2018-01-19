/*
 * LineaAerea.cpp
 *
 *  Created on: 22/06/2012
 *  Author: Pedro Gabriel Leal
 */

#include "LineaAerea.h"
#include "Vuelos.h"
int const MAX = 3;
LineaAerea::LineaAerea()
{
	// TODO Auto-generated constructor stub
	acumIngresoTotal = 0;
	cantidadMenorP.setNumPasajeros (500);
	acumPasajerosTotal = 0;
	acumPasajerosInternacionales = 0;
	mayorIngreso.setCostoPasaje(0);
	acumIngresoVuelos = 0;


}

void LineaAerea::setAcumIngresoTotal(float elAcumIT)
{
	acumIngresoTotal = elAcumIT;
}



float LineaAerea::getAcumIngresoTotal()
{
	return acumIngresoTotal;
}



void LineaAerea::setCantidadMenorP(Vuelos laCantidadMenor)
{
	cantidadMenorP = laCantidadMenor;
}



Vuelos LineaAerea::getCantidadMenorP()
{
	return cantidadMenorP;
}



void LineaAerea::setAcumPasajerosTotal(int elAcumPT)
{
	acumPasajerosTotal = elAcumPT;
}



int LineaAerea::getAcumPasajerosTotal()
{
	return acumPasajerosTotal;
}



void LineaAerea::setAcumPasajerosInternacionales(int elAcumPasInt)
{
	acumPasajerosInternacionales = elAcumPasInt;
}



int LineaAerea::getAcumPasajerosInternacionales()
{
	return acumPasajerosInternacionales;
}



void LineaAerea::acumularIngresoTotal (Vuelos losVl)
{
	acumIngresoTotal = losVl.calcularIngreso() + acumIngresoTotal;
}



void LineaAerea::compararCantidadMenorP(Vuelos losVl)
{
	if (losVl.getNumPasajeros() < cantidadMenorP.getNumPasajeros())
	cantidadMenorP = losVl;

}



void LineaAerea::acumularPasajerosTotal(Vuelos losVl)
{
	acumPasajerosTotal = losVl.getNumPasajeros() + acumPasajerosTotal;
}



void LineaAerea::acumularPasajerosInternacionales(Vuelos losVl)
{
	if (losVl.getTipoVuelo() == 'I')
	acumPasajerosInternacionales = losVl.getNumPasajeros() + acumPasajerosInternacionales;
}

float LineaAerea::calcularPorcentajeInt(Vuelos losVl)
{
	float porcentaje;
	if (acumPasajerosTotal > 0)
		porcentaje = (acumPasajerosInternacionales * 100) / acumPasajerosTotal;
	else
		porcentaje = 0;
	return porcentaje;
}

void LineaAerea::setMayorIngreso(Vuelos elMayorIng)
{
	mayorIngreso = elMayorIng;
}

Vuelos LineaAerea::getMayorIngreso()
{
	return mayorIngreso;
}

void LineaAerea::setAcumIngresoVuelo(float elAcumInV)
{
	acumIngresoVuelos = elAcumInV;
}

float LineaAerea::getAcumIngresoVuelo()
{
	return acumIngresoVuelos;
}

void LineaAerea::compararMayorIngreso(Vuelos losVl)
{
	if (losVl.calcularIngreso() > mayorIngreso.getCostoPasaje())
		mayorIngreso = losVl;
}

void LineaAerea::acumularIngresoVuelo(Vuelos losVl)
{
	acumIngresoVuelos = losVl.getCostoPasaje() + acumIngresoVuelos;
}

float LineaAerea::promediarIngresoVuelos(Vuelos losVl)
{
	float elprom;
	elprom = (acumIngresoVuelos * losVl.calcularIngreso());
	return elprom;
}











