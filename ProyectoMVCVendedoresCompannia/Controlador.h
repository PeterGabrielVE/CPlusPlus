/*
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "MCompannia.h"
#include "VVendedor.h"
#include "VCompannia.h"

class Controlador
{
   private:
      MVendedor mv;
      MCompannia mc;
      VVendedor vv;
      VCompannia vc;
   public:
      Controlador();
      void ProcesarVendedores();
      void ReporteCompannia(); 
};


#endif
