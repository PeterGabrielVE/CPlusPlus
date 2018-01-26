/*
 * Author: Pedro Gabriel Leal
 */


#ifndef VCLIENTE_H
#define VCLIENTE_H
#include "VGeneral.h"

class VCliente : public VGeneral
{
      public:
        VCliente();
        void ImprimirCliente(string c, string n, float mb, float md, float mi, float mt);
};
#endif
