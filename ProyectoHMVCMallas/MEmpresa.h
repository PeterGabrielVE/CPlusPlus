/*
 * Controlador.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
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
   float menordscto;



  public:
   MEmpresa();

   //set

     void SetContclie(int contc);
     void SetContclie10(int contc10);
     void SetMenordscto(float menord);
   //get

     int GetContClie() ;
     int GetContClie10() ;
     float GetMenordscto();

    //Calculos
      void ProcesarCliente(MCliente MC);
      float CalcPorcClie10();


 };
 #endif
