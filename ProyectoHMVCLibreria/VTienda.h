/*
 * VTienda.h
 *
 *  Created on: 05/05/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef VTIENDA_H_
#define VTIENDA_H_
#include "VGeneral.h"

class VTienda : public VGeneral
{
public:
	VTienda();
	void ImprimirControldeCompras(float g,float p,string m);
};

#endif /* VTIENDA_H_ */
