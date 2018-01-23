/*
 *
 * Author:Pedro Gabriel Leal
 *
 */

    #include "MEmpresa.h"

   MEmpresa::MEmpresa()
   {
    
     contclie=0;
     contclie10=0;
     //REQUERIMIENTO 1-> inicializacion de acumuladores para mayor de dos
     acumdsctoplana=acumdsctorollo=0;

     //REQUERIMIENTO 2-> inicializacion del mayor de muchos
     mayor=0;

   }
   
   void MEmpresa::ProcesarCliente(MCliente mc)
   {
     ++contclie;   
     if(mc.GetAntiguedad()>10)
       ++contclie10;

     //REQUERIMIENTO 1-> sentencias para acumular(mayor de dos)

     if(mc.GetTipoMalla()==1)
    	 acumdsctoplana+= mc.CalcDescuento();
     else
    	 acumdsctorollo+= mc.CalcDescuento();


     //REQUERIMIENTO 2-> sentencias para acumular(mayor de muchos)
     if(mc.CalcDescuento() > mayor)
    	 mayor= mc.CalcDescuento();
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

//REQUERIMIENTO 1-> Metodo que calcula el mayor de dos

string MEmpresa::CalcMayorDeDos()
{
	if (acumdsctoplana  > acumdsctorollo)
		return "Plana";
	if (acumdsctorollo  > acumdsctoplana)
			return "De Rollo";
	else return "Ambas poseen igual descuento";

}

//REQUERIMIENTO 1-> Metodos GET que retornan los acumuladores para mayor de dos)
float MEmpresa::GetAcumdsctoplana()
{
    return acumdsctoplana;
}

float MEmpresa::GetAcumdsctorollo()
{
    return acumdsctorollo;
}

//REQUERIMIENTO 2-> Metodo que retorna el mayor de muchos)
float MEmpresa::GetMayor(){
    return mayor;
}





