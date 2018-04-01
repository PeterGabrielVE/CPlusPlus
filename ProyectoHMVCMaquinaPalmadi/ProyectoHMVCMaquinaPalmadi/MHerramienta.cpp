/*
 * MHerramienta.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MHerramienta.h"

MHerramienta::MHerramienta() {
	// TODO Auto-generated constructor stub

}

void MHerramienta::SetDiasalguiler(int diasa)
{
    diasalguiler = diasa;
}

int MHerramienta::GetDiasalguiler()
{
    return diasalguiler;
}

float MHerramienta::CalcMontoAlquiler()
{
  float montoalquiler;
  switch(GetTipo())
  {
    case 1: montoalquiler=500 * diasalguiler;
            break;
    case 2: montoalquiler=100 * diasalguiler;
            break;
    case 3: montoalquiler=290 * diasalguiler;
            break;
  }
  return montoalquiler;

}











