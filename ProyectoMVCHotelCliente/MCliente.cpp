/*
 * MCliente.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "MCliente.h"

MCliente::MCliente()
{
	// TODO Auto-generated constructor stub

}


void MCliente :: setCedula(long c)
{
     Cedula = c;
}

void MCliente :: setCantDias(int cd)
{
     CantDias = cd;
}

void MCliente :: setTipoHospedaje(int th)
{
     TipoHospedaje = th;
}

long MCliente:: getCedula()
{
     return Cedula;
}

int MCliente :: getCantDias()
{
    return CantDias;
}

int MCliente :: getTipoHospedaje()
{
    return TipoHospedaje;
}

float MCliente :: CalcMontoACancelar()
{
	float monto;
      switch (TipoHospedaje)
      {
             case 1: monto=CantDias * 220;
             break;
             case 2: monto= CantDias * 290;
             break;
             case 3: monto= CantDias * 660;
             break;
             case 4: monto= CantDias * 850;
             break;
      }
      return monto;
}
