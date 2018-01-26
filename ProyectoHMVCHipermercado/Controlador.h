/*
 * Controlador.h
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MHipermercado.h"
#include "VHipermercado.h"
#include "VArticulo.h"
class Controlador {

private:
	MHipermercado mh;
public:

	Controlador();
	void ProcesarArticulos();
	void Estadisticas();

};

#endif /* CONTROLADOR_H_ */
