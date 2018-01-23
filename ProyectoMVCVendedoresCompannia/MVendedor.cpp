/*
 * Author: Pedro Gabriel Leal
 *
 */


#include "MVendedor.h"

MVendedor::MVendedor(){}

void MVendedor::SetCedula(string c)
{
   cedula = c;
}

void MVendedor::SetNombre(string n)
{
   nombre = n;
}
      
void MVendedor::SetSueldobase(float sb)
{
   sueldobase = sb;
}

void MVendedor::SetMontoventas(float mvta)
{
   montoventas = mvta;
}

string MVendedor::GetCedula()
{
   return cedula;
}


string MVendedor::GetNombre()
{
   return nombre;
}

float MVendedor::GetSueldobase()
{
   return sueldobase;
}

float MVendedor::GetMontoventas()
{
   return montoventas;
}

float MVendedor::CalcComisionVentas()
{
  float comis;
   if (montoventas <=50000)
      comis =0;
   else
	  if (montoventas <=100000)
		  comis= montoventas * 0.04;
	  else
		  comis= montoventas * 0.07;
   return comis;
}

float MVendedor::CalcDeduccion()
{
   return sueldobase*0.05;
}      

float MVendedor::CalcSueldoNeto()
{
   return sueldobase + CalcComisionVentas() - CalcDeduccion();
}
