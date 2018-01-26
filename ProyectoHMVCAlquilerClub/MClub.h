/*
 * MClub.h
 *
 *  Created on: 23/11/2013
 *  Author:Pedro Gabriel Leal
 */

#ifndef MCLUB_H_
#define MCLUB_H_
#include "MConferencia.h"
#include "MFiesta.h"

class MClub {
private:
	float acummontocancelarsocio;
	float contsocios;
public:
	MClub();
	void SetAcumMontoCancelarsocio(float amcs);
	float GetAcumMontoCancelarsocio();
	void SetContSocios(float csc);
	float GetContSocios();
	float CalcPromedio();
	void ProcesarMConferencia(MConferencia mc);
	void ProcesarMFiesta(MFiesta mf);
};

#endif /* MCLUB_H_ */
