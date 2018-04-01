/*
 * Controlador.h
 *
 *  Created on: 30/10/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MEmpresa.h"
#include "VCliente.h"
#include "VEmpresa.h"

using namespace std;

class Controlador
 {
  private:
    MEmpresa me;

  public:
   Controlador();
   void ProcesarEmpresa();
   void Reporte();
 };

 #endif
