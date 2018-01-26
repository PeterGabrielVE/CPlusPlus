/*
 * MVida.cpp
 * Author:Pedro Gabriel Leal
 */


#include "MVida.h"

MVida::MVida(){}

void MVida::SetEdad(int e)
{
     edad = e;
}
int MVida::GetEdad()
{
    return edad;
}

float MVida::CalcRecargo()
{
   if(edad < 50)
      return 0.00;
    else
      if (edad <= 80)
        return (1.5/100) * GetCantAseg();
      else
    	  return 0;

}

float MVida::CalcCostoPoliza()
{
		return CalcCostoBasico() + CalcRecargo();
}
