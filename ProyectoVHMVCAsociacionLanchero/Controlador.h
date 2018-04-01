/*
 * Controlador.h
 *
 *  Created on: 05/02/2014
 *
 *       Author:Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MAsociacion.h"
#include "VAsociacion.h"
class Controlador {
private:
	MAsociacion ma;
	VAsociacion va;



public:
	Controlador();
	void CargarDatosCayos();
	void ProcesarTraslados();
	void ReporteLancheros();
	void ListadoCayos();

};

#endif /* CONTROLADOR_H_ */
