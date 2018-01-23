/*
 * Controlador.h
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MCoordinacion.h"
#include "VCoordinacion.h"
#include "VAlumno.h"
#include <cstdlib>

using namespace std;

class Controlador
{
private:
	MCoordinacion mc;
public:
	Controlador();
	void ProcesarCoordinacion();
	void Reporte ();
};

#endif /* CONTROLADOR_H_ */
