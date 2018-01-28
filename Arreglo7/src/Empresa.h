/*
 * empresa.h
 *
 *  Created on: 22/07/2012
 *      Author: Pedro
 */

#ifndef EMPRESA_H_
#define EMPRESA_H_
int const MAX = 3;
#include "vendedor.h"

class empresa
{
	private:
		vendedor AVendedores[MAX];
		int ptr;
	public:
		void setAVendedores(vendedor elVendedor);
		vendedor getAVendedores(int i);
		void setPtr(int elPtr);
		int getPtr();
		float calcularComision(vendedor elVendedor);
		float calcularPromV();
		vendedor determinarMejorV();
		float calcularComG();
	empresa();
};

#endif /* EMPRESA_H_ */
