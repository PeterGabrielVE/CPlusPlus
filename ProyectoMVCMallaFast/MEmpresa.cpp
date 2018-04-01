/*
 * MEmpresa.cpp
 *
 *  Created on: 30/10/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MEmpresa.h"

MEmpresa::MEmpresa()
{
	contclie=contclie10=0;
	// TODO Auto-generated constructor stub
	menordscto=9999999999;
}

//set
   void MEmpresa::SetContclie(int contc) {
      	contclie = contc;
      }

   void MEmpresa::SetContclie10(int contc10) {
      	contclie10 = contc10;
      }

	void MEmpresa::SetMenordscto(float menord) {
		menordscto = menord;
	}




void MEmpresa::ProcesarCliente(MCliente MC)
   {
     ++contclie;
     if(MC.GetAntiguedad()>10)
       ++contclie10;

     if(MC.CalcDescuento() < menordscto)
      menordscto= MC.CalcDescuento();
   }


   float MEmpresa::CalcPorcClie10()
   {
     if (contclie!=0)
      return ((contclie10*100)/contclie);
      else return 0;
   }

   int MEmpresa::GetContClie()
   {
     return contclie;
   }

   int MEmpresa::GetContClie10()
   {
     return contclie10;
   }

   float MEmpresa::GetMenordscto()
   {
     		return menordscto;
    }
