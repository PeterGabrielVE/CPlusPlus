/*
 * Controlador.h
 *
 *  Created on: 15/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "VEmpleado.h"
#include "VEmpresa.h"
#include "MEmpresa.h"
#include "MEmpleado.h"

class Controlador {
private:
	MEmpresa mep;
public:
	Controlador();
	void ProcesarEmpleados();
	void ImprimirEmpresa();


};

#endif /* CONTROLADOR_H_ */
