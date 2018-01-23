/*
 * Author: Pedro Gabriel Leal
 *
 */


#ifndef MCOMPANNIA_H
#define MCOMPANNIA_H
#include "MVendedor.h"

class MCompannia
{
   private:
      float monto_total_nomina;
   public:
      MCompannia();
      void ProcesarVendedor (MVendedor mv);
      float GetMontoNomina();
};


#endif
