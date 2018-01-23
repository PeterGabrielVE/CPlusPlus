/*
 * MTaller.h
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#ifndef MTaller_H
#define MTaller_H
#include "MMecanico.h"
#include "MRepara.h"

class MTaller
{
   private:
      float mayor;
      float acumBsf;
   public:
      MTaller();
      void SetMayor(float m);
      float GetMayor();
      void SetAcumBsf(float a);
      float GetAcumBsf();
      void ProcesarTrabajoMecanico(MMecanico meca); // Relaci�n uso con MMecanico
      void ProcesarReparacion(MRepara repara);
};
#endif
