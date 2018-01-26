/*
 * MFiesta.cpp
 *
 *  Created on: 23/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MFiesta.h"

int MFiesta::GetCantmesas() const {
	return cantmesas;
}

void MFiesta::SetCantmesas(int cantmesas) {
	this->cantmesas = cantmesas;
}

int MFiesta::GetCantsillas() const {
	return cantsillas;
}

void MFiesta::SetCantsillas(int cantsillas) {
	this->cantsillas = cantsillas;
}

int MFiesta::GetTipofiesta() const {
	return tipofiesta;
}

void MFiesta::SetTipofiesta(int tipofiesta) {
	this->tipofiesta = tipofiesta;
}

MFiesta::MFiesta() {
	// TODO Auto-generated constructor stub

}

float MFiesta::CalcularMontoSillasyMesas() {
 return cantmesas*15 + cantsillas *5;
}

float MFiesta::CalcularDesctoaSocio() {
  float descto;
	if (GetSocio()==1)
    {
	   switch(tipofiesta)
	   {
	     case 1 : descto= 0.30 * 1100;
	              break;
	     case 2 : descto= 0.15 * 1100;
	 	          break;
	     case 3 : descto= 0.20 * 1100;
	 	          break;
	    }
	    return descto;
    }
	else
		return 0;
}

float MFiesta::CalcularMontoaPagar() {
 return CalcularMontoAlquiler() + CalcularMontoSillasyMesas() - CalcularDesctoaSocio();

}


