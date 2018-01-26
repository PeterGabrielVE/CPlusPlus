/*
 * MDpto.h
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */
#ifndef MDPTO_H
#define MDPTO_H
#include "MVenta.h"
#include <string>
using namespace std;
class MDpto
{ private:
   string nomdpto;
   float acbs;
  public:
   MDpto();
   void SetNomDpto(string n);
   void SetAcBs(float ac);
   string GetNomDpto();
   float GetAcBs();
   void ActualizarMontoDpto(MVenta venta);
};
#endif
