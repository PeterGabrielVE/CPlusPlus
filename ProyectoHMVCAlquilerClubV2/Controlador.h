/*
 * Controlador.h
 *
 *  Created on: 23/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MClub.h"
#include "VClub.h"
#include "VEvento.h"

class Controlador {
private:
	MClub mcl;
public:
	Controlador();
	void ProcesarEventos();
	void Estadisticas();
};

#endif /* CONTROLADOR_H_ */
