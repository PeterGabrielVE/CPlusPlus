/*
 * MContratado.cpp
 *
 *  Created on: 24/04/2012
 *     Author: Pedro Gabriel Leal
 */

#include "MContratado.h"
MContratado :: MContratado(){}

void MContratado :: SetDuracionContrato(int dc)
{   duracioncontrato = dc; }

void MContratado :: SetMontoContrato(float mc)
{  montocontrato = mc; }

int MContratado ::GetDuracionContrato ()
{  return duracioncontrato;}

float MContratado :: GetMontoContrato()
{  return montocontrato;  }

/* Calcula el sueldo mensual que cobrar� el profesor
   de acuerdo a su contrato */
float MContratado :: SueldoMensual()
{  return montocontrato / duracioncontrato; }

/* Calcula el sueldo neto que cobrar� el profesor de acuerdo
   al sueldo mensual y al bono por hijos que le corresponde */
float MContratado :: SueldoNeto()
{   return SueldoMensual() + BonoHijos();  }
