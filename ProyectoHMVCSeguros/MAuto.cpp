/*
 * MAuto.cpp
 * Author:Pedro Gabriel Leal
 */

#include "MAuto.h"

MAuto::MAuto(){}

//set

void MAuto::SetPlaca(string pl)
{
    placa = pl;
}

void MAuto::SetModelo(string mod)
{
    modelo = mod;
}

void MAuto::SetMarca(string marc)
{
    marca = marc;
}

void MAuto::SetAnno(int aa)
{
    anno = aa;
}

//get
string MAuto::GetPlaca()
{
    return placa;
}

string MAuto::GetModelo()
{
    return modelo;
}

string MAuto::GetMarca()
{
    return marca;
}

int MAuto::GetAnno()
{
    return anno;
}

//metodos propios

float MAuto::CalcDscto(int annoencurso)
{
      if( annoencurso== anno)
       return 0.01*GetCantAseg();
        else
         return 0.00;
}

float MAuto::CalcCostoPoliza(int annoencurso)
{

		return CalcCostoBasico() - CalcDscto(annoencurso);
}
