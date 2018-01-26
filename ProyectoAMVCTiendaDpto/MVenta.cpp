/*
 * MVenta.cpp
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */

#include "MVenta.h"
//Constructor
MVenta :: MVenta() {}

//Metodos Setters
void MVenta :: SetNumDpto(int n)
{   nrodpto = n;  }
 
void MVenta :: SetCantVend(int  c)
{   cantvend = c; }

void MVenta :: SetPrecio(float p)
{   precio = p;   }

//Metodos Getters
int MVenta :: GetNumDpto()
{   return nrodpto;}

int MVenta :: GetCantVend()
{   return cantvend;  }

float MVenta :: GetPrecio()
{   return precio;  }

// Calcula el monto a cobrar por la venta realizada
float MVenta :: MontoVenta()
{   return precio*cantvend;  }
