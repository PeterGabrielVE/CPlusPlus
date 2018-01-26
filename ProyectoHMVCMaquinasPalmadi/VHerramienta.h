/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
 */


#ifndef VHERRAMIENTA_H_
#define VHERRAMIENTA_H_
#include "VGeneral.h"

class VHerramienta : public VGeneral{
public:
	VHerramienta();
	void ImprimirHerramienta(string codigo, string descripcion,
			                 float iva, float montofinalalquiler,string nombreherr);
};

#endif /* VHERRAMIENTA_H_ */
