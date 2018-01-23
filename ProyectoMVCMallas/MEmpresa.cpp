/*
 *
 * Author: Pedro Gabriel Leal
 *
 */
    #include "MEmpresa.h"

   MEmpresa::MEmpresa()
   {
    
     contclie=0;
     contclie10=0;               
   }
   
   void MEmpresa::ProcesarCliente(MCliente MC)
   {
     ++contclie;   
     if(MC.GetAntiguedad()>10)
       ++contclie10;
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
