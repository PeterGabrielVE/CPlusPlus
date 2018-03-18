/*
 *  MServicio.cpp
 *
 *  Created on: 02/02/2014
 *     Author: Pedro Gabriel Leal
 */



#include "MServicio.h"

MServicio:: MServicio(){}

void MServicio::SetTipo(int t)
{
  tipo=t;                   
}

void MServicio::SetMonto(float mto)
{
  monto=mto;
}

int MServicio::GetTipo()
{
  return tipo;                   
}

float MServicio::GetMonto()
{
  return monto;                    
}
