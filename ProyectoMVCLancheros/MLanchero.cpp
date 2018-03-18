/*
 * MLanchero.cpp
 *
 *  Created on: 05/02/2014
 *
 *     Author: Pedro Gabriel Leal
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


void MLanchero::Actualizar(float ganl)
{

	acumganancia+= ganl;

}

void MLanchero::SetCanttraslados(int cantt) {
	canttraslados = cantt;
}

int MLanchero::GetCanttraslados() {
	return canttraslados;
}
