/*
 * MMartillo.h
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MMARTILLO_H_
#define MMARTILLO_H_
#include "MHerramienta.h"
class MMartillo :public MHerramienta{
public:
	MMartillo();
	float CalcMontoFinalAlquiler();
	float CalcIva();
	float CalcMontoFinalP();
};

#endif /* MMARTILLO_H_ */
