/*
 * Author: Pedro Gabriel Leal
 */

#ifndef VLIBRO_H_
#define VLIBRO_H_
#include "VGeneral.h"

class VLibro : public VGeneral
{
public:
	VLibro();
	void ImprimirLibro(string cod, float cn, float pc);
};

#endif /* VLIBRO_H_ */
