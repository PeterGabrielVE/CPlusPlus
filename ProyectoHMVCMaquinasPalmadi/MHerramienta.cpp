/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
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


string MHerramienta::DetNombreHerramienta()
{
  string nombreherr;
  switch(GetTipo())
  {
    case 1: nombreherr="Martillo Demoledor de Concreto ";
            break;
    case 2: nombreherr="Esmeriladora de Hierro";
            break;
    case 3: nombreherr="Lijadora de Madera";
            break;
  }
  return nombreherr;

}









