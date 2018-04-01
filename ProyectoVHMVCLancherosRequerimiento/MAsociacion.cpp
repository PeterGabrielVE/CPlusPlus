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

 	veclancheros[posi].Actualizar(ganl,mt);
 	veccayos[mt.GetNrocayo()-1].Actualizar(ganasoc);
}

string MAsociacion::DetDiaEnLetras(int dia)
  {
	string dialetras;
	switch (dia)
	{
	  case 1 : dialetras="lunes";
	           break;
	  case 2 : dialetras="martes";
	           break;
	  case 3 : dialetras="miercoles";
	           break;
	  case 4 : dialetras="jueves";
	           break;
	  case 5 : dialetras="viernes";
	           break;
	  case 6 : dialetras="sabado";
	           break;
	  case 7 : dialetras="domingo";
	            break;
	}
	return dialetras;
}


vector<string> MAsociacion::DetVecNombresDias()
{
	vector <string> vauxdias;
	for (int d = 0; d < 7; ++d)
		vauxdias.push_back(DetDiaEnLetras(d+1));
	return vauxdias;
	/*aqui hemos construido un vector con los dias de la semana,
	 * usando el metodo DetDiaEnLetras que recibe un nro y retorna un dia en letras,
	 *
	 */
}

vector <string> MAsociacion::DetVecNombresCayos() {
  vector <string> vnombrescayos;

  for(int i=0; i< CantidadCayos();++i)
	  vnombrescayos.push_back(veccayos[i].GetDesc());
  return vnombrescayos;
}

vector<float> MAsociacion::DetVecMtoTotalSemana()
{
    vector<float> vauxmtosem;
    float acum;
	for(int d=0; d<7;++d)
	{
	  acum=0;
	  for(int l=0; l<CantidadLancheros();++l)
		acum+= veclancheros[l].GetMtoxDia(d);
	  vauxmtosem.push_back(acum*0.2);
	 }

   return vauxmtosem;
}

int MAsociacion::CalcTotTrasladosUnCayo(int ncayo) {
 int tottraslados=0;
 for(int l=0; l<CantidadLancheros();++l)
    tottraslados+=veclancheros[l].GetTraslxcayo(ncayo-1);
 return tottraslados;

}

int MAsociacion::CalcCantLancherosSintraslados(int dia) {
	int cont=0;
	for(int l=0; l<CantidadLancheros();++l)
	  if(veclancheros[l].GetMtoxDia(dia-1)==0)
		  ++cont;
	return cont;
}













