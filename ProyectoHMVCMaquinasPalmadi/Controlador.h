/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MEmpresa.h"
#include "VEmpresa.h"
#include "VHerramienta.h"

class Controlador {

private:
	MEmpresa mempre;

public:
	Controlador();
	void ProcesarHerramientas();
	void Estadisticas();
};

#endif /* CONTROLADOR_H_ */
