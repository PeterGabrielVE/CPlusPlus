/*
 * Controlador.h
 *
 *  Created on: 04/07/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MCompania.h"
#include "VCompannia.h"
#include "VLlamadas.h"

class Controlador
{
private:
	MCompania mc;
	VCompannia vc;
public:
	Controlador();
	void ProcesarCompania();
	void Reporte();
};

#endif /* CONTROLADOR_H_ */
