/*
 * VClinica.h
 *
 *  Created on: 27/01/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef VCLINICA_H_
#define VCLINICA_H_
#include <vector>
#include "VGeneral.h"

class VClinica : public VGeneral
{
public:
VClinica();
void ImprimirConsultaTurno(int totalpac);
void ImprimirEstadisticas(float montotcons,float montothosp,float total, string mayorTurno);
void ImprimirListado(vector<string>vcedmayor);
};

#endif /* VCLINICA_H_ */
