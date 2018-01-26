/*
 * MCentroComunicaciones.cpp
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#include "MCentroComunicaciones.h"

MCentroComunicaciones::MCentroComunicaciones() {
	// TODO Auto-generated constructor stub

	acumrecaudado =0;
}

void MCentroComunicaciones::SetAcumrecaudado(float acumr)
{
    acumrecaudado = acumr;
}

float MCentroComunicaciones::GetAcumrecaudado()
{
    return acumrecaudado;
}

void MCentroComunicaciones::ProcesarFijo(MFijo mf)
{
	acumrecaudado+= mf.CalcMontoTotAPagar();
}

void MCentroComunicaciones::ProcesarCelular(MCelular mc)
{
	acumrecaudado+= mc.GetMontototalpagado();
}




