/*
 * VCliente.h
 *
 *  Created on: 30/10/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VCLIENTE_H_
#define VCLIENTE_H_
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
