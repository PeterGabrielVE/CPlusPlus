/*
 * Author: Gabriel Leal
 *
 */

#include "MTallerC.h"

MTallerC::MTallerC ()
{
	contoperhe = 0;
	acummontohe = acumsueldo = 0.00;
}



int MTallerC::GetContOperHE()
{
	return contoperhe;
}

float MTallerC::GetAcumMontoHE()
{
	return acummontohe;
}

float MTallerC::GetAcumSueldo ()
{
	return acumsueldo;
}

void MTallerC::ProcesarOperario (MOperario mo)
{
	acumsueldo += mo.CalcSueldoSemanal();
	if (mo.GetHorasTrab() > 40)
	{
		++contoperhe;
		acummontohe += mo.CalcPagoExtra();
	}
}
