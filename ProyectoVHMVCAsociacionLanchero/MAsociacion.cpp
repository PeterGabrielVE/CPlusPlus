/*
 * MAsociacion.cpp
 *
 *  Created on: 05/02/2014
 *
 *      Author: Gabriel
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

 	veccayos[mt.GetNrocayo()-1].Actualizar();
 	float tarifa=veccayos[mt.GetNrocayo()-1].GetPvp();
 	veclancheros[posi].Actualizar(mt,tarifa );

}

string MAsociacion::DetCayoEnLetras(int ncayo)
{
	string cayoletras;
	switch (ncayo)
     {

          case 1 : cayoletras="Sal";
		           break;
		  case 2 : cayoletras="muerto";
		           break;
		  case 3 : cayoletras="Pelon";
		           break;
		  case 4 : cayoletras="Sombrero";
		           break;
		  case 5 : cayoletras="Borracho";
		           break;
		  case 6 : cayoletras="Peraza";
		           break;
		  case 7 : cayoletras="Los Juanes";
		           break;
          case 8 : cayoletras="Playuela";
                   break;
          case 9 : cayoletras="Mero";
                   break;
     }
	return cayoletras;
}


