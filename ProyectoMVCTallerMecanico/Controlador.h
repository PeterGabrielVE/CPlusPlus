/*
 * Controlador.h
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H
#define CONTROLADOR_H
// MTaller incluye a MMecanico y a su vez MMecanico incluye a MRepara

#include "MTaller.h"
#include "VRepara.h"
#include "VMecanico.h"
#include "VTaller.h"

class Controlador
{
   private:

   public:
      Controlador();
      void ProcesarMecanicos();
};
#endif
