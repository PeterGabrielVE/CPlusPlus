/*
 * MEmpleado.cpp
 *
 *  Created on: 14/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MEmpleado.h"
MEmpleado::MEmpleado(){}

void MEmpleado::SetMontoPrestamo(float mp)
{
montoprestamo = mp;
}

float MEmpleado::GetMontoPrestamo()
{
return montoprestamo;
}

float MEmpleado::CalcMontoCuotas()
{
if (sexo ==1)
return CalcMontoaPagar() / 36;
else
return CalcMontoaPagar() / 24;
}

float MEmpleado::CalcMontoaPagar()
{
if (sexo == 1 and edad < 60)
return (0.15* montoprestamo) + montoprestamo;
else
if (sexo == 1 and edad >= 60)
return (0.10* montoprestamo) + montoprestamo;
else
if (sexo == 2 and edad < 65)
return (0.20* montoprestamo) + montoprestamo;
else return (0.15* montoprestamo) + montoprestamo;
}

