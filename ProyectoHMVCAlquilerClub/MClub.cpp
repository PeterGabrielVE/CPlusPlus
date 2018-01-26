/*
 * MClub.cpp
 *
 *  Created on: 23/11/2013
 *  Author:Pedro Gabriel Leal
 */

#include "MClub.h"

MClub::MClub() {
acummontocancelarsocio = 0;
contsocios = 0;

}

void MClub::SetAcumMontoCancelarsocio(float amcs)
{
	acummontocancelarsocio = amcs;
}



float MClub::GetAcumMontoCancelarsocio()
{
	return acummontocancelarsocio;
}



void MClub::SetContSocios(float csc)
{
	contsocios = csc;
}



float MClub::GetContSocios()
{
	return contsocios;
}



float MClub::CalcPromedio()
{
	if (contsocios != 0)
		return acummontocancelarsocio / contsocios ;
	else
		return 0;
}



void MClub::ProcesarMConferencia(MConferencia mc)
{
	if (mc.GetSocio() == 1)
	{
		acummontocancelarsocio += mc.CalcMontoaPagar();
		contsocios++;
	}


}



void MClub::ProcesarMFiesta(MFiesta mf)
{
	if (mf.GetSocio() == 1)
		{
			acummontocancelarsocio += mf.CalcularMontoaPagar();
			contsocios++;
		}
}



