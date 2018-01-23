/*
 * Author: Pedro Gabriel Leal
 */

#ifndef MEMPRESA_H
#define MEMPRESA_H
#include "MCliente.h"
#include<string>

using namespace std;
class MEmpresa
 {
  private:
   int contclie;
   int contclie10;

   /*requerimiento 1-> */
   float acummontos;
   
   float acummtsL;/*requerimiento 2-> */
   float acummtsD;/*requerimiento 2-> */
   float acummtsR;/*requerimiento 2-> */

  public:
   MEmpresa();

   //set
     void SetAcummontos(float acumm);/*requerimiento 1-> */
     void SetAcummtsD(float acumD);
     void SetAcummtsL(float acumL);
     void SetAcummtsR(float acumR);
     void SetContclie(int contc);
     void SetContclie10(int contc10);

   //get
     float GetAcummontos() ;/*requerimiento 2-> */
     float GetAcummtsD() ;
     float GetAcummtsL() ;
     float GetAcummtsR() ;
     int GetContClie() ;
     int GetContClie10() ;

    //Calculos
      void ProcesarCliente(MCliente MC);
      float CalcPorcClie10();
      float CalcPromedioMontos();
      string CalmayorDeTres();

 };
 #endif
