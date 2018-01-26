/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
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
