/*
 * VEmpleado.h
 *
 *  Created on: 15/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VEMPLEADO_H_
#define VEMPLEADO_H_
#include "VGeneral.h"

class VEmpleado: public VGeneral {
public:
	VEmpleado();
	void ImprimirEmpleado(string nombre, string cedula, int age, float montoapagar, float montocuotas);
};

#endif /* VEMPLEADO_H_ */
