/*
 * VFijo.h
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef VFIJO_H_
#define VFIJO_H_
#include "VGeneral.h"

class VFijo : public VGeneral {
public:
	VFijo();
	void ImprimirFijo(int nrotlf, float rentabasica, float montoapagar);
};

#endif /* VFIJO_H_ */
