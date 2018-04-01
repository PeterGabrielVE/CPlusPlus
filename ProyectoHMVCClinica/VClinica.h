/*
 * VClinica.h
 *
 *  Created on: 26/01/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef VCLINICA_H_
#define VCLINICA_H_

#include <vector>
#include "VGeneral.h"
class VClinica : public VGeneral {
public:
	VClinica();

	void ImprimirConsultaTurno(int totpacientes);
	void ImprimirEstadisticas(float montototcons,
			                  float montotothosp);
	void ImprimirListado(vector<string> vcedmayor);
};

#endif /* VCLINICA_H_ */
