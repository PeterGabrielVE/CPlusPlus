/*
 * VAsegurado.h
 * Author:Pedro Gabriel Leal
 *
 */
#ifndef VASEGURADO_H
#define VASEGURADO_H
#include "VGeneral.h"
using namespace std;
class VAsegurado : public VGeneral
{
      public:
        VAsegurado();
        void ImprimirAsegurado(string ced, string nom, string tipopoliza, float costopoliza);
};

#endif
