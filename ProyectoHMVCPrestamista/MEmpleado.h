/*
 * MEmpleado.h
 *
 *  Created on: 14/11/2013
 *     Author: Pedro Gabriel Leal
 */

#ifndef _MEMPLEADO_
#define _MEMPLEADO_
#include "MPersona.h"

class MEmpleado : public MPersona
{
private:
float montoprestamo;

public:
MEmpleado();
void SetMontoPrestamo(float mp);
float GetMontoPrestamo();
float CalcMontoCuotas();
float CalcMontoaPagar();
};

#endif

