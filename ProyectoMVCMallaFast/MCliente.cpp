/*
 * MCliente.cpp
 *
 *  Created on: 30/10/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MCliente.h"

MCliente::MCliente()
{
	// TODO Auto-generated constructor stub

}

//set

 void MCliente::SetCedula(string c)
   {
    cedula=c;
   }

 void MCliente::SetNombre(string n)
   {
    nombre=n;
   }

 void MCliente::SetTipoMalla(int tm)
   {
    tipomalla=tm;
   }

 void MCliente::SetAntiguedad(int a)
   {
    antiguedad=a;
   }

 void MCliente::SetMetros(float m)
   {
    metros=m;
   }

  //get

  string MCliente::GetCedula()
   {
    return cedula;
   }

  string MCliente::GetNombre()
  {
   return nombre;
  }

  int MCliente::GetTipoMalla()
  {
   return tipomalla;
  }

  int MCliente::GetAntiguedad()
  {
    return antiguedad;
  }

 //Funciones propias de la clase

  float MCliente::CalcMonto()
  {
   float monto;
   if(tipomalla==1)
    monto=metros*4000;
    else
     monto=metros*2500;
   return monto;
  }

  float MCliente::CalcDescuento()
  {

   if(antiguedad <5)
    return CalcMonto()*0.08;
    else
     if(antiguedad <=8)
       return CalcMonto()*0.12;
      else
        return CalcMonto()*0.2;
  }

string MCliente::CalcTipoMallaComprada()
  {
    if(tipomalla==1)
     return "Plana";
     else
      return "Rollo";

  }
