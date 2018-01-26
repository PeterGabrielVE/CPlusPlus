/*
 * Controlador.h
 *
 *  Created on: 05/01/2012
 *       Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MCompannia.h"
#include "VCompannia.h"
class Controlador {
private:
    MCompannia mc;
	VCompannia vc;
	bool chequeo_opcion;
public:
	Controlador();
	void CargarCorredores();
	void CargarTiposSeguros();
	void ProcesarContratos();
	void ReporteCorredoresSuperaronMetaVenta();
	void ConsultaTipoSeguro();
	void ReporteCorredores();
};
#endif /* CONTROLADOR_H_ */
