/*
 * Controlador.h
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MTaller.h"
// MTaller incluye a MMecanico y a su vez MMecanico incluye a MRepara
#include "VReparacion.h"
#include "VMecanico.h"
#include "VTaller.h"

class Controlador
{
   private:
	MTaller mtall; //relacion de COMPOSICION -> MTALLER-CONTROLADOR

   public:
	Controlador();
	void ProcesarMecanicos();
	void ReporteTaller();
};

#endif /* CONTROLADOR_H_ */
