/*
 * Controlador.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
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
   void ProcesarClientes();
   void ReporteEmpresa();
 };

 #endif
