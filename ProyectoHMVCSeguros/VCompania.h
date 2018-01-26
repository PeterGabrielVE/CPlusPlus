/*

*VCompania.h
*Author:Pedro Gabriel Leal
*
 */

#ifndef VCOMPANIA_H
#define VCOMPANIA_H
#include <iostream>
#include <string>
#include "VGeneral.h"
using namespace std;
class VCompania : public VGeneral
{
      public:
        VCompania();
        void ImprimirCompania(float montoasegvida,float montoasegauto,
        		              string tipopolizamayor,float porcpoliza50y70,
        		              float porcpolizarechazvida,float porcpolizarechazauto);
};

#endif
