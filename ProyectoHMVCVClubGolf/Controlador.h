/*
 * Controlador.h
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MClubGolf.h"
#include "VClubGolf.h"

class Controlador {
private:
	  MClubGolf mcg;
	  VClubGolf vcg;
	  bool chequeo;
public:
	Controlador();
	void SetChequeo(bool cheq);
	bool GetChequeo() ;
	void RegistrarAreas();
	void RegistrarServiciosAlquler();
	void ProcesarAlquileres();
	void ReporteEstadistico();

};

#endif /* CONTROLADOR_H_ */
