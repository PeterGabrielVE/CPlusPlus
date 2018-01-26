/*
 * MTienda.cpp
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */


#include "MTienda.h"

MTienda::MTienda()
{
	// TODO Auto-generated constructor stub
}

void MTienda::SetAcumgananciajug(float acgj)
{
    acumgananciajug = acgj;
}

float MTienda::GetAcumgananciajug()
{
    return acumgananciajug;
}

void MTienda::ProcesarJuguetes(MJuguetes mj)
{
	acumgananciajug+= mj.CalcGanancia();
}
