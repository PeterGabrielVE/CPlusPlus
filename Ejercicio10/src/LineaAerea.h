/*
 * LineaAerea.h
 *
 *  Created on: 22/06/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef LINEAAEREA_H_
#define LINEAAEREA_H_
#include "Vuelos.h"
#include <string.h>
class LineaAerea
{
private:
	float acumIngresoTotal;
	Vuelos cantidadMenorP;
	Vuelos mayorIngreso;
	int acumPasajerosTotal;
	int acumPasajerosInternacionales;
	float acumIngresoVuelos;
	float promediar;
	float porcentaje;

public:
	LineaAerea();
	void setAcumIngresoTotal (float elAcumIT);
	float getAcumIngresoTotal ();
	void setCantidadMenorP (Vuelos laCantidadMenor);
	Vuelos getCantidadMenorP ();
	void setMayorIngreso (Vuelos elMayorIng);
	Vuelos getMayorIngreso ();
	void setAcumPasajerosTotal (int elAcumPT);
	int getAcumPasajerosTotal ();
	void setAcumPasajerosInternacionales (int elAcumPasInt);
	int getAcumPasajerosInternacionales ();
	void setAcumIngresoVuelo (float elAcumInV);
	float getAcumIngresoVuelo ();
	void acumularIngresoTotal (Vuelos losVl);
	void compararCantidadMenorP (Vuelos losVl);
	void acumularPasajerosTotal (Vuelos losVl);
	void acumularPasajerosInternacionales (Vuelos losVl);
	float calcularPorcentajeInt (Vuelos losVl);
	void compararMayorIngreso (Vuelos losVl);
	void acumularIngresoVuelo (Vuelos losVl);
	float promediarIngresoVuelos (Vuelos losVl);

};

#endif /* LINEAAEREA_H_ */
