/*
 * MOrdinario.cpp
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MOrdinario.h"

MOrdinario :: MOrdinario(){}

void MOrdinario :: SetSueldoMensual(float s)
{   sueldomensual = s;  }

void MOrdinario :: SetHorario(int h)
{  horario = h;  }

float MOrdinario :: GetSueldoMensual()
{   return sueldomensual;  }

int MOrdinario :: GetHorario()
{  return horario;  }

// Calcula el descuento del 1% por club
float MOrdinario :: DescuentoClub()
{  return sueldomensual * 0.01;  }

// Calcula el bono por horario
float MOrdinario :: BonoHorario()
{  if (horario == 2 )    // nocturno
      return 200;
   if (horario == 3)     // mixto
      return 100;
   return 0;             // diurno
}
/* Calcula el sueldo neto de acuerdo a las asignaciones y
  deducciones que le corresponden al profesor */
float MOrdinario :: SueldoNeto()
{  return sueldomensual + BonoHijos() + BonoHorario() - DescuentoClub();
}
