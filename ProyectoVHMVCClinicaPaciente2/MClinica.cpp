/*
 * MClinica.cpp
 *
 *  Created on: 26/01/2014
 *      Author: Pedro Gabriel Leal
 */

#include "MClinica.h"

MClinica::MClinica() {
	// TODO Auto-generated constructor stub

}

//metodos basicos del vector
void MClinica::IncluirPaciente(MPaciente mp)
{
	 vec_pac.push_back(mp);
}

int MClinica::CantidadPacientes()
{
	return vec_pac.size();
}

int MClinica::BuscarPaciente(string ced) {
	for (int i=0; i<CantidadPacientes(); ++i)
		if (ced== vec_pac[i].GetCedula())
				return i;
	return -1;
}

void MClinica::SetPaciente(MPaciente mp, int posicion) {

	vec_pac[posicion]= mp;
}

MPaciente MClinica::GetPaciente( int posicion)
{
 return vec_pac[posicion];
}

//metodos de calculos

int MClinica::ContarPacPorTurno(int turnoleido)
 {
  int cont=0;
  for (int i=0; i < CantidadPacientes();++i)
    if (vec_pac[i].GetTurno()==turnoleido)
      ++cont;
  return cont;
 }

float MClinica::CalcMontoTotCons()
{
	float ac=0;
		for (int i=0; i<CantidadPacientes();++i)
		    if (vec_pac[i].GetMotivoV()==1)
		     ac+=vec_pac[i].GetMontoC();
		return ac;
}



float MClinica::CalcMontoTotHosp()
{
	float ac=0;
	for (int i=0; i<CantidadPacientes();++i)
	if (vec_pac[i].GetMotivoV()==2)
	 ac+=vec_pac[i].GetMontoC();
     return ac;
}



float MClinica::CalcMayor()
{
	float mayor=0;
	 for (int i=0; i<CantidadPacientes();++i)
	  if (vec_pac[i].GetMotivoV()==1 and
	      vec_pac[i].GetMontoC()> mayor)
		mayor=vec_pac[i].GetMontoC();
	 return mayor;
}




float MClinica::TotalRecaudado()
{
	return CalcMontoTotCons() +  CalcMontoTotHosp();
}

vector<string> MClinica::DetVCedMayor()
{
	float may= CalcMayor();
		vector<string> vced;
	for (int i=0; i<CantidadPacientes();++i)
		 if (vec_pac[i].GetMotivoV()==1 and
		      vec_pac[i].GetMontoC()== may)
			    vced.push_back(vec_pac[i].GetCedula());
	    return vced;
}


int MClinica::ContarPacVesp()
{
	int cont2=0;
	for (int i=0; i < CantidadPacientes();++i)
	if (vec_pac[i].GetTurno()==2 and (vec_pac[i].GetDia()==6 or vec_pac[i].GetDia()==7))
	++cont2;
	return cont2;
}

int MClinica::ContPacMat()
{
	int cont1=0;
	for (int i=0; i < CantidadPacientes();++i)
	if (vec_pac[i].GetTurno()==1 and (vec_pac[i].GetDia()==6 or vec_pac[i].GetDia()==7))
	++cont1;
	return cont1;
}



string MClinica::CalcMayorVisitado()
{
	if (ContPacMat()>ContarPacVesp())
		return "Matutino";
		else
		if (ContarPacVesp() >ContPacMat() )
		return "Vespertino";
		else
		return "Matutino y Vespertino";
}











