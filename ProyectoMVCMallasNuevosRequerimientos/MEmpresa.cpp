/*
 * Author: Pedro Gabriel Leal
 */
    #include "MEmpresa.h"

   MEmpresa::MEmpresa()
   {
    
     contclie=0;
     contclie10=0;

     /*requerimiento 1 y requerimiento 2 */
     acummontos=acummtsL= acummtsD=acummtsR=0;

   }


   //set
   void MEmpresa::SetContclie(int contc) {
      	contclie = contc;
      }

   void MEmpresa::SetContclie10(int contc10) {
      	contclie10 = contc10;
      }

   void MEmpresa::SetAcummontos(float acumm) {
   	acummontos = acumm;
   }/*requerimiento 1-> */

   void MEmpresa::SetAcummtsD(float acumD) {
   		acummtsD = acumD;
   	}/*requerimiento 2-> */

   void MEmpresa::SetAcummtsL(float acumL) {
   	acummtsL = acumL;
   }/*requerimiento 2-> */

   void MEmpresa::SetAcummtsR(float acumR) {
   	acummtsR = acumR;
   }/*requerimiento 2-> */




   //get

   int MEmpresa::GetContClie()
   {
     return contclie;
   }

   int MEmpresa::GetContClie10()
   {
     return contclie10;
   }

   float MEmpresa::GetAcummontos()  {
   	return acummontos;
   }/*requerimiento 1-> */


   float MEmpresa::GetAcummtsD()  {
   	return acummtsD;
   }/*requerimiento 2-> */

   float MEmpresa::GetAcummtsL()  {
   	return acummtsL;
   }/*requerimiento 2-> */

   float MEmpresa::GetAcummtsR()  {
   	return acummtsR;
   }/*requerimiento 2-> */


 //calculos
   void MEmpresa::ProcesarCliente(MCliente MC)
   {
     ++contclie;   

     /*requerimiento 1-> */
     acummontos+= MC.CalcMonto();


     if(MC.GetAntiguedad()>10)
       ++contclie10;

     switch (MC.GetTipomaterial())/*requerimiento 2-> */
     {
      case 1: acummtsL+= MC.GetMetros();
           break;
      case 2: acummtsD+= MC.GetMetros() ;
           break;
      case 3: acummtsR+= MC.GetMetros() ;
           break;
     }

   }


   float MEmpresa::CalcPorcClie10()
   {
     if (contclie!=0)
      return ((contclie10*100)/contclie);
      else return 0;   
   }


float MEmpresa::CalcPromedioMontos() {/*requerimiento 2-> */
	if (contclie!=0)
	  return (acummontos/contclie);
	  else return 0;
}

string MEmpresa::CalmayorDeTres() {/*requerimiento 2-> */

 string cadenamayor="";
 float mayor;

 //calcula el mayor de tres
 mayor= acummtsL;
 if (acummtsD > mayor)
	 mayor= acummtsD;
 if (acummtsR > mayor)
 	 mayor= acummtsR;

 // ahora calculamos a cual(les) le(s) corresponde ese mayor
 if (acummtsL == mayor)
	 cadenamayor= cadenamayor + " Liviano";
 if (acummtsD == mayor)
 	 cadenamayor= cadenamayor + " - Duplex";
 if (acummtsR == mayor)
 	 cadenamayor= cadenamayor + " - Robusto";

return cadenamayor;

}
/*requerimiento 1-> */
