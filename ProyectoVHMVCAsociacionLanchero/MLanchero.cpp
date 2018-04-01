/*
 * MLanchero.cpp
 *
 *  Created on: 05/02/2014
 *
 *       Author:Pedro Gabriel Leal
 */

#include "MLanchero.h"

MLanchero::MLanchero() {

	acumganancia=0;
}
	// TODO Auto-generated constructor stub

void MLanchero::SetAcumganancia(float acumgan) {
  acumganancia = acumgan;
	}


float MLanchero::GetAcumganancia()
  {return acumganancia;
	}


void MLanchero::Actualizar(MTraslado mt, float tarifa)
{
	float ganancia;
	if(mt.GetDia()>=6)
		ganancia= tarifa*0.8;
	else
		ganancia= tarifa*0.9;

	acumganancia+=ganancia;

}

void MLanchero::SetCanttraslados(int cantt) {
	canttraslados = cantt;
}

int MLanchero::GetCanttraslados() {
	return canttraslados;
}
