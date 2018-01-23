/*
 * Author: Pedro Gabriel Leal
 */
    #include "MEmpresa.h"

   MEmpresa::MEmpresa()
   {
    
     contclie=0;
     contclie10=0;
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

   //get

   int MEmpresa::GetContClie()
   {
     return contclie;
   }

   int MEmpresa::GetContClie10()
   {
     return contclie10;
   }

   float MEmpresa::GetMenordscto() {
   		return menordscto;
   	}

 //calculos
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


