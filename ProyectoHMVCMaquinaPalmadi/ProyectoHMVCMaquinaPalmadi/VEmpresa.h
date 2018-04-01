/*
 * VEmpresa.h
 *
 *  Created on: 22/05/2012
 *     Author: Pedro Gabriel Leal
 */

#ifndef VEMPRESA_H_
#define VEMPRESA_H_
#include "VGeneral.h"

class VEmpresa : public VGeneral{
public:
	VEmpresa();
	void ImprimirEmpresa(string tipoherrmayor);
};

#endif /* VEMPRESA_H_ */
