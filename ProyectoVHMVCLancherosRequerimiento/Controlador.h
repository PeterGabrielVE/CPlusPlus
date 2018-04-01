/*
 * Controlador.h
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
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

	void ConsultarLanchero(); //REQ 1
	void ListadoIngresosDiarios(); //REQ 2

	void MostrarTraslxLancheroUnCayo(); //Req 3
	void MostrarCantTrasladosxCayo(); //Req 4
	void MostrarCantLacherosSinTraslados(); //Reg 5

};

#endif /* CONTROLADOR_H_ */
