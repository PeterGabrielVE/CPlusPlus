/*
 * MAsociacion.cpp
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
 */

#include "MAsociacion.h"

MAsociacion::MAsociacion() {
	// TODO Auto-generated constructor stub
}

void MAsociacion::IncluirLancheros(MLanchero ml)
{
	veclancheros.push_back(ml);
}

int MAsociacion::CantidadLancheros()
{
	return veclancheros.size();
}

int MAsociacion::Buscarlanchero(string ced)
{
	for(int i=0; i<CantidadLancheros();++i)
		if (ced==veclancheros[i].GetCedula())
			return i;
	return -1;
}


void MAsociacion::SetLanchero(MLanchero ml, int posicion)
{
	veclancheros[posicion]= ml;
}



MLanchero MAsociacion::GetLanchero(int i)
{
	return veclancheros[i];
}



void MAsociacion::IncluirCayo(MCayo mc)
{
	veccayos.push_back(mc);
}



int MAsociacion::CantidadCayos()
{
	return veccayos.size();

}


void MAsociacion::SetCayo(MCayo mc, int posicion)
{
	veccayos[posicion]= mc;
}

MCayo MAsociacion::GetCayo(int i)
{
	return veccayos[i];
}

void MAsociacion::Procesar(MTraslado mt, int posi) {

    float ganl,ganasoc;
    float tarifa=veccayos[mt.GetNrocayo()-1].GetPvp();
    if(mt.GetDia()>=6)
 		ganasoc=0.2*tarifa;
 	else
 		ganasoc=0.1*tarifa;
    ganl=tarifa-ganasoc;

 	veclancheros[posi].Actualizar(ganl);
 	veccayos[mt.GetNrocayo()-1].Actualizar(ganasoc);

}

vector <string> MAsociacion::DetVecNombresCayos() {
  vector <string> vnombrescayos;

  for(int i=0; i< CantidadCayos();++i)
	  vnombrescayos.push_back(veccayos[i].GetDesc());
  return vnombrescayos;
}


