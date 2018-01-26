/*
 * VEvento.h
 *
 *  Created on: 23/11/2013
 *  Author:Pedro Gabriel Leal
 */

#ifndef VEVENTO_H_
#define VEVENTO_H_
#include "VGeneral.h"
class VEvento : public VGeneral {
public:
	VEvento();
	void ImprimirEvento(int numsala, float montoapagar);
};

#endif
