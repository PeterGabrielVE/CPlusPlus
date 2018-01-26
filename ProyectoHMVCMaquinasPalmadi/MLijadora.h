/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MLIJADORA_H_
#define MLIJADORA_H_
#include "MHerramienta.h"
class MLijadora :public MHerramienta{
private:
	int cantlijas;
public:
	MLijadora();
	void SetCantlijas(int cantl);
	int GetCantlijas();
	float CalcMontoLijas();
	float CalcDescuento();
	float CalcMontoFinalAlquiler();
	float CalcIva();


};

#endif /* MLIJADORA_H_ */
