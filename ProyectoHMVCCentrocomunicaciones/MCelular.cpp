/*
 * MCelular.cpp
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#include "MCelular.h"

MCelular::MCelular() {
	// TODO Auto-generated constructor stub
}

void MCelular::SetMontototalpagado(float mtp)
{
    montototalpagado = mtp;
}

float MCelular::GetMontototalpagado()
{
    return montototalpagado;
}

float MCelular::CalcPagoAdicional()
{
	return  montototalpagado - GetRentabasica();
}
