/*
 * VEmpleado.h
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VEMPLEADO_H_
#define VEMPLEADO_H_
#include "VGeneral.h"

class VEmpleado:public VGeneral
{
public:
	VEmpleado();
	void ImprimirEmpleado(string ced,
	string nom, int diasdisf, float suevac);
};

#endif /* VEMPLEADO_H_ */
