/*
 * Controlador.h
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MTienda.h"
#include "VLibro.h"
#include "VTienda.h"
class Controlador {
private:
	MTienda mtda;

public:
	Controlador();
	void ProcesarLibros();
	void Estadisticas();
};

#endif /* CONTROLADOR_H_ */
