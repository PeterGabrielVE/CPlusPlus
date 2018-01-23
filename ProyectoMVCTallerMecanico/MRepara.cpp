/*
 * MRepara.cpp
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#include "MRepara.h"

MRepara::MRepara() {
	// TODO Auto-generated constructor stub

}

void MRepara::SetTipoReparacion(int t)
{
     tipo_reparacion = t;
}
void MRepara::SetMontoReparacion(float m)
{
     monto_reparacion = m;
}
int MRepara::GetTipoReparacion()
{
      return tipo_reparacion;
}
float MRepara::GetMontoReparacion()
{
      return monto_reparacion;
}

/* Calcula la comision respectiva a la reparacion realizada
   seg�n el tipo de reparacion y el monto de la misma*/
float MRepara::ComisionReparacion()
{
  switch (tipo_reparacion)
   {  case 1 : return monto_reparacion* 0.1;
               break;
      case 2 : return monto_reparacion* 0.2;
               break;
      case 3 : return monto_reparacion* 0.15;
   }
}
