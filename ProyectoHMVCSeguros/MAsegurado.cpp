/*
 * MAsegurado.cpp
 * Author:Pedro Gabriel Leal
 */

#include "MAsegurado.h"

MAsegurado::MAsegurado(){}

void MAsegurado::SetFechaseguro(string fech)
{
	fechaseguro = fech;
}
void MAsegurado::SetTipoPoliza(int tp)
{
     tipopoliza = tp;
}
void MAsegurado::SetCantAseg(float ca)
{
     cantaseg = ca;
}
void MAsegurado::SetPorcAplicar(float pa)
{
     porcaplicar = pa;
}
string MAsegurado::GetFechaseguro()
{
       return fechaseguro;
}

int MAsegurado::GetTipoPoliza()
{
    return  tipopoliza;
}
float MAsegurado::GetCantAseg()
{
      return cantaseg;
}
float MAsegurado::GetPorcAplicar()
{
      return  porcaplicar;
}
float MAsegurado::CalcCostoBasico()
{
      return cantaseg*porcaplicar/100;
}

string MAsegurado::DeterminarTipoPolizaLetras()
{
	string tipoletras;
       switch(tipopoliza)
       {
          case 1:tipoletras="Vida";
                break;
          case 2:tipoletras="Automovil";
                break;
       }
       return tipoletras;
}















