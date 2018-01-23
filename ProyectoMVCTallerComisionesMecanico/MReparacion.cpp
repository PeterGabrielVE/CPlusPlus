/* MReparacion.cpp
 *
 * Author: Pedro Gabriel Leal
 *
 */
#include "MReparacion.h"
MReparacion::MReparacion(){}

void MReparacion::SetTipoReparacion(int t)
{
     tipo_reparacion = t;
}
void MReparacion::SetMontoReparacion(float m)
{
     monto_reparacion = m;
}

int MReparacion::GetTipoReparacion()
{
      return tipo_reparacion;
}

float MReparacion::GetMontoReparacion()
{
      return monto_reparacion;
}

// Calcula la comision respectiva a la reparacion realizada
// seg�n el tipo de reparacion
float MReparacion::CalcComisionReparacion()
{
  float comision;
  switch (tipo_reparacion)
   {  case 1 : comision= monto_reparacion* 0.1;
               break;
      case 2 :  comision= monto_reparacion* 0.2;
               break;
      case 3 : comision= monto_reparacion* 0.15;
      break;
   }         
  return comision;
}

float MReparacion::CalcGanancia() {
	  float ganancia = monto_reparacion - CalcComisionReparacion();
	  return ganancia;
}


