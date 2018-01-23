/*
 * Author: Pedro Gabriel Leal
 */


#ifndef VCLIENTE_H
#define VCLIENTE_H
#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;
class VCliente
 {
  public:
   VCliente();
   string LeerCedula();
   string LeerNombre();
   int LeerTipoMalla();
   int LeerAntiguedad();
   float LeerMetros(); 


   void ImprimirCliente(string cedu, string nom, string MallaComprada, float Descto);
};

#endif   
   
