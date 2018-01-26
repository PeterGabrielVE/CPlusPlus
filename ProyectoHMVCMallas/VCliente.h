/*
 * Controlador.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */
#ifndef VCLIENTE_H
#define VCLIENTE_H
#include "VGeneral.h"
class VCliente :public VGeneral
 {
  public:
   VCliente();
   void ImprimirCliente(string cedu, string nom, string MallaComprada, float Descto);
};

#endif   
   
