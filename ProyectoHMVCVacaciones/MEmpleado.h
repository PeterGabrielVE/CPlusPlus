/*
 * VEmpleado.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */


#ifndef MEMPLEADO_H
#define MEMPLEADO_H

#include "MPersona.h"
class MEmpleado : public MPersona
{
   private:
      int  diaini, diafin;
      float sueldod;
   public:
      MEmpleado();
      void SetDiaIni(int di);
      void SetDiaFin(int df);
      void SetSueldoD(float sb);
      int  GetDiaIni();
      int  GetDiaFin();
      float GetSueldoD();
      int  CantDiasDisfrute();
      float SueldoVacacional();
};
#endif
