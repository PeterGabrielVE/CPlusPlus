/*
 * VHerramienta.h
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */


#ifndef VHERRAMIENTA_H_
#define VHERRAMIENTA_H_
#include "VGeneral.h"

class VHerramienta : public VGeneral{
public:
	VHerramienta();
	void ImprimirHerramienta(string codigo, string descripcion,
			                 float iva, float montofinalalquiler);
};

#endif /* VHERRAMIENTA_H_ */
