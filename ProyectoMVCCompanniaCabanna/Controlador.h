/*
 * Controlador.h
 *
 *  Created on: 20/09/2014
 *      Author: Gabriel
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MCompannia.h"
#include "VCompannia.h"
#include "VCabanna.h"

class Controlador
{
	private:
	       MCompannia mc;
    public:
	       Controlador();
	       void ProcesarCabanna();

};

#endif /* CONTROLADOR_H_ */
