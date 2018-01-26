/*
 * MHipermercado.cpp
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MHipermercado.h"


MHipermercado::MHipermercado() {
	// TODO Auto-generated constructor stub

	acumtotvendido=0;
	contmueblesdscto=0;
}


void MHipermercado::SetAcumtotvendido(float acum) {
	acumtotvendido = acum;
}


void MHipermercado::SetContmueblesdscto(int cont) {
	contmueblesdscto = cont;
}


float MHipermercado::GetAcumtotvendido() {
	return acumtotvendido;
}


int MHipermercado::GetContmueblesdscto() {
	return contmueblesdscto;
}

void MHipermercado::ProcesarElectrodomestico( MElectrodomestico me) {
  acumtotvendido+= me.CalcMontoaPagar();
}

void MHipermercado::ProcesarMueble(MMueble mm) {
  acumtotvendido+= mm.CalcMontoaPagar();
  if (mm.CalcDescto() > 150)
    ++contmueblesdscto;
}




