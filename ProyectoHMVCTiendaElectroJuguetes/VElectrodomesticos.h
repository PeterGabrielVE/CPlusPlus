/*
 * VElectrodomestico.h
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VELECTRODOMESTICOS_H_
#define VELECTRODOMESTICOS_H_
#include "VGeneral.h"
class VElectrodomesticos : public VGeneral

{
public:
	VElectrodomesticos();
	void ImprimirElectrodomesticos(string cod, string desc, string elcolor,float precvta);
};

#endif /* VELECTRODOMESTICOS_H_ */
