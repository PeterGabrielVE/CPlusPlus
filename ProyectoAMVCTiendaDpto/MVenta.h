/*
 * MVenta.h
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */
#ifndef MVENTA_H
#define MVENTA_H

class MVenta
{ private:
   int nrodpto, cantvend;
   float precio;       
  public:
   MVenta();
   void SetNumDpto(int n);
   void SetCantVend(int n);
   void SetPrecio(float cb);
   int GetNumDpto();
   int GetCantVend();
   float GetPrecio();
   float MontoVenta();
};
#endif
