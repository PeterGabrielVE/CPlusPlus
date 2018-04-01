/*
 * MEmpresa.h
 *
 *  Created on: 30/10/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MEMPRESA_H_
#define MEMPRESA_H_
#include "MCliente.h"
#include<string>

using namespace std;

class MEmpresa
 {
  private:
   int contclie, contclie10;
   float menordscto;
  public:
   MEmpresa();

   //set
   void SetContclie(int contc);
   void SetContclie10(int contc10);
   void SetMenordscto(float menord);

   //get
      int GetContClie();
      int GetContClie10();
      float GetMenordscto();

   // calculos
   void ProcesarCliente(MCliente MC);
   float CalcPorcClie10();

 };
 #endif
