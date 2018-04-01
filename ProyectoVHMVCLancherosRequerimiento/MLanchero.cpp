/*
 * MLanchero.cpp
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
 */

#include "MLanchero.h"

MLanchero::MLanchero() {

	acumganancia=0;
	for(int  i=0; i<7; ++i)
	  {
		vecmtoxdia.push_back(0);
		vcantTraslxcayo.push_back(0);
	  }
}
	// TODO Auto-generated constructor stub

void MLanchero::SetAcumganancia(float acumgan) {
  acumganancia = acumgan;
	}


float MLanchero::GetAcumganancia()
  {return acumganancia;
	}


void MLanchero::Actualizar(float ganl,
                           MTraslado mt )
{

	acumganancia+= ganl;
	++vcantTraslxcayo[mt.GetNrocayo()-1];

}

void MLanchero::SetCanttraslados(int cantt) {
	canttraslados = cantt;
}

int MLanchero::GetCanttraslados() {
	return canttraslados;
}

int MLanchero::CantidadDias()
{
 return vecmtoxdia.size();
}

void MLanchero::SetMtoxdia(float md,
                           int posi)
{
	vecmtoxdia[posi]=md;
}

float MLanchero::GetMtoxDia(int i)
{
	return vecmtoxdia[i];
}

float MLanchero::CalcMontoSemana()
{
	float acum=0;
	for(int  i=0; i<7; ++i)
	  acum+= vecmtoxdia[i];
 return acum ;
}

void MLanchero::Inicializar() {
	for(int  i=0; i<7; ++i)
	{
		vecmtoxdia[i]=0;
        vcantTraslxcayo[i]=0;
	}
}

int MLanchero::CantidadTraslxcayo() {
	return vcantTraslxcayo.size();
}

void MLanchero::SetTraslxcayo(int ct, int posicion) {
	vcantTraslxcayo[posicion]=ct;

}

float MLanchero::GetTraslxcayo(int posicion) {
	return vcantTraslxcayo[posicion];
}
