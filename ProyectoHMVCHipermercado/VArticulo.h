/*
 * VArticulo.h
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VARTICULO_H_
#define VARTICULO_H_
#include "VGeneral.h"

class VArticulo :public VGeneral{
public:
	VArticulo();
	void ImprimirArticulo(string codigoarti, float montoapagar);
};

#endif /* VARTICULO_H_ */
