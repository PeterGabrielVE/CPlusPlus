/*
 * Controlador.h
 *
 *  Created on: 27/01/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MClinica.h"
#include "VClinica.h"
class Controlador {
private:
	MClinica mc;
    VClinica vc;
public:
	Controlador();
	void ProcesarInfoPacientes();
	void MostrarConsultaTurno();
	void MostrarEstadisticas();
	void MostrarListado();

};

#endif /* CONTROLADOR_H_ */
