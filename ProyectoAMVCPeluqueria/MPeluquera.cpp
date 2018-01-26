/*
 * MPeluquera.cpp
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */

#include "MPeluquera.h"
// Constructor que genera el vector vbs_dia con las 6 casillas en cero
MPeluquera::MPeluquera()
{ for (int i=0; i<6; ++i)
	  vbsdia.push_back(0);
}

// Asigna el valor bs en la casilla dia del vector vbsdia
void MPeluquera::SetBsDia(int dia, float bs)
{	vbsdia[dia] = bs; }

//Asigna el vector vbs_semana completo al vector vbsdia
void MPeluquera::SetBsCadaDia(vector<float> vbssemana)
{  vbsdia = vbssemana; }

//Extrae los bs que se encuentran en la casilla dia
float MPeluquera::GetBsDia(int dia)
{  return vbsdia[dia];}

// Extrae el vector vbsdia
vector<float> MPeluquera::GetBsCadaDia()
{  return vbsdia; }

// Indica la cantidad de casillas que tiene el vector vbsdia
int MPeluquera::CantDias()
{  return vbsdia.size(); }

/* Adiciona una casilla al final en el vector vbsdia, la cual contendr�
   el dato indicado en el parametro bs  */
void MPeluquera::InsertarBsDia(float bs)
{  vbsdia.push_back(bs);}

// Inicializa el vector que contiene los bs de cada dia de la semana
void MPeluquera::InicializarBsDiarios()
{  for (int i=0; i<6; ++i)
	   vbsdia[i]= 0;
}
/* Actualiza los bs del trabajo realizado por la peluqueria en el d�a
   de la semana que corresponde   */
void MPeluquera::ActualizarBs(MServPrest msp, MArticulo mts)
{  vbsdia[msp.GetDia()-1] += mts.GetPvp(); }

// Calcula el total de bsf. generados por la peluquera en la semana
float MPeluquera::TotalBsSemana()
{  float ac = 0;
   for (int i=0; i<CantDias(); ++i)
	   ac += vbsdia[i];
   return ac;
}
