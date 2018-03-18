/*
 * Vlibro.h
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VLIBRO_H_
#define VLIBRO_H_
#include "VGeneral.h"
class VLibro : public VGeneral{
public:
	VLibro();
	void ImprimirLibro(string codigo, float precioneto, float costoneto);
};

#endif /* VLIBRO_H_ */
