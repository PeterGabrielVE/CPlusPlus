/*
 *
 * Author: Pedro Gabriel Leal
 *
 */


#ifndef CONTROLADOR_H
#define CONTROLADOR_H
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
