/*
 *
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef MEMPRESA_H
#define MEMPRESA_H
#include "MCliente.h"
#include<string>
using namespace std;
class MEmpresa
 {
  private:
   int contclie, contclie10;
   
  public:
   MEmpresa();
   // calculos
   void ProcesarCliente(MCliente MC);
   float CalcPorcClie10();
   //get
   int GetContClie();
    int GetContClie10();
 };
 #endif
