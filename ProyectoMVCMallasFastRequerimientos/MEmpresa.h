/*
 *
 * Author:Pedro Gabriel Leal
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
   
   //REQUERIMIENTO 1-> acumuladores
   float acumdsctoplana;
   float acumdsctorollo;
   //REQUERIMIENTO 2-> mayor de muchos
   float mayor;

  public:
   MEmpresa();
   // calculos
   void ProcesarCliente(MCliente MC);
   float CalcPorcClie10();
   //get
   int GetContClie();
    int GetContClie10();

    //metodo para REQUERIMIENTO 1 ->
     string CalcMayorDeDos();
    float GetAcumdsctoplana();
    float GetAcumdsctorollo();
    float GetMayor();
 };
 #endif
