/*
 * VCelular.h
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef VCELULAR_H_
#define VCELULAR_H_
#include "VGeneral.h"

class VCelular : public VGeneral{
public:
	VCelular();
	void ImprimirCelular(int nrotlf, float rentabasica, float montoadicional);
};

#endif /* VCELULAR_H_ */
