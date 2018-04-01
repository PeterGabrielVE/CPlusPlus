/*
 * Controlador.h
 *
 *  Created on: 22/05/2012
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
	bool chequeo;
public:
	Controlador();
	void SetChequeo(bool);
	bool GetChequeo();
	void ProcesarHerramientas();
	void Estadisticas();
};

#endif /* CONTROLADOR_H_ */
