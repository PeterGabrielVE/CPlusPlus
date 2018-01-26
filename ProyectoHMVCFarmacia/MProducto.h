/*
 * Author: Pedro Gabriel Leal
 */
#ifndef MPRODUCTO_H
#define MPRODUCTO_H
#include "MArticulo.h"

class  MProducto : public MArticulo
{
      protected:

        int cantidad;

      public:
        MProducto();        

        void SetCantidad(int ca);
        int GetCantidad();

        float CalcMontoProducto();
};
#endif
