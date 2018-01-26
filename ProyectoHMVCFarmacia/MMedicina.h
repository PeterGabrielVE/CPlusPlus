/*
 * Author: Pedro Gabriel Leal
 */

#ifndef MMEDICINA_H
#define MMEDICINA_H
#include "MProducto.h"
using namespace std;
class MMedicina : public MProducto
{
      public:
         MMedicina(); 
         float CalcDscto();
};
#endif
