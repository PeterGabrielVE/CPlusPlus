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
  vecpacientes.push_back(mp);
}

int MClinica::CantidadPacientes()
{
	return vecpacientes.size();
}

int MClinica::BuscarPaciente(string ced) {
	for (int i=0; i<CantidadPacientes(); ++i)
		if (ced== vecpacientes[i].GetCedula())
				return i;
	return -1;
}

void MClinica::SetPaciente(MPaciente mp, int posicion) {

	vecpacientes[posicion]= mp;
}

MPaciente MClinica::GetPaciente( int posicion)
{
 return vecpacientes[posicion];
}

//metodos de calculos

int MClinica::ContarPacPorTurno(int turnoleido)
 {
  int cont=0;
  for (int i=0; i < CantidadPacientes();++i)
    if (vecpacientes[i].GetTurno()==turnoleido)
      ++cont;
  return cont;
 }

//metodos propios de calculos
float MClinica::CalcMontoTotCons()
{
	float ac=0;
	for (int i=0; i<CantidadPacientes();++i)
	    if (vecpacientes[i].GetMotivovisita()==1)
	     ac+=vecpacientes[i].GetMontocancelado();
	return ac;
}

float MClinica::CalcMontoTotHosp()
{
	float ac=0;
	for (int i=0; i<CantidadPacientes();++i)
		if (vecpacientes[i].GetMotivovisita()==2)
			ac+=vecpacientes[i].GetMontocancelado();
	return ac;
}

float MClinica::CalcMayor()
{
 float mayor=0;
 for (int i=0; i<CantidadPacientes();++i)
  if (vecpacientes[i].GetMotivovisita()==1 and
      vecpacientes[i].GetMontocancelado()> mayor)
	mayor=vecpacientes[i].GetMontocancelado();
 return mayor;
}

vector<string> MClinica::DetVCedMayor()
{
	float may= CalcMayor();
	vector<string> vced;
	for (int i=0; i<CantidadPacientes();++i)
	  if (vecpacientes[i].GetMotivovisita()==1 and
	      vecpacientes[i].GetMontocancelado()== may)
		    vced.push_back(vecpacientes[i].GetCedula());
    return vced;
}

