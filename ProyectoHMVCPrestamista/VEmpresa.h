/*
 * VEmpresa.h
 *
 *  Created on: 15/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VEMPRESA_H_
#define VEMPRESA_H_
#include "VGeneral.h"
class VEmpresa: public VGeneral {
public:
	VEmpresa();
	void ImprimirEmpresa(float montototal, float porcentaje, float promedio);
};

#endif /* VEMPRESA_H_ */
