/*
 * MVendedor.cpp
 *
 *  Created on: 05/06/2012
 *  Author: Pedro Gabriel Leal
 */

#include "MVendedor.h"

MVendedor::MVendedor() {}

void MVendedor :: SetMontoVend(float m)
{ montovend = m; }

float MVendedor :: GetMontoVend()
{ return montovend; }

// Calcula la comisi�n
float MVendedor :: Comision()
{ return montovend * 0.2; }

// Calcula el bono de acuerdo a la comisi�n
float MVendedor :: Bono()
{   if (montovend > 80000)
        return Comision() * 0.03;
    return 0;
}


