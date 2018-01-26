/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
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
};

#endif /* MMARTILLO_H_ */
