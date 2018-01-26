/*
 * MConferencia.h
 *
 *  Created on: 23/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MCONFERENCIA_H_
#define MCONFERENCIA_H_
#include "MEvento.h"

class MConferencia :public MEvento {
private:
	int videobeam;
	int canthoras;
public:
	MConferencia();
	int GetCanthoras() const;
	void SetCanthoras(int canthoras);
	int GetVideobeam() const;
	void SetVideobeam(int videobeam);
	float CalcMontoVideobeam();
	float CalcMontoaPagar();


};

#endif /* MCONFERENCIA_H_ */
