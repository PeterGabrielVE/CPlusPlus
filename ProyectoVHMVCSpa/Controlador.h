/*
 * Controlador.h
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MSpa.h"
#include "VSpa.h"
class Controlador {
private:
	bool chequeo;
	MSpa ms;
	VSpa vs;
public:
	Controlador();
	void RegistrarTerapias();
	void RegistrarTratamientos();
	void ProcesarTerapiasClientes();
	void Reporte();
    void SetChequeo(bool cheq);
    bool GetChequeo();
};

#endif /* CONTROLADOR_H_ */
