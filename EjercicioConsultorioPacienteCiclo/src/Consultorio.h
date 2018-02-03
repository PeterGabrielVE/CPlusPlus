/*
 * Consultorio.h
 *
 *  Created on: 06/02/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONSULTORIO_H_
#define CONSULTORIO_H_
#include "Paciente.h"
#include <iostream>
using namespace std;

class Consultorio {
public:
	int ContPaciente;
	int ContPacientePI;
	int ContPacienteEst;


public:
	Consultorio();
	int getContPaciente();
	int getContPacientePI();
	int getContPacienteEst();
	void ContarPaciente();
    float CalcularPorcentajePI();
	string DeterminarCondicion(Paciente elPaciente);
    string DeterminarEstaturaM(Paciente elPaciente);
	float CalcularPorcentajePE();
};

#endif /* CONSULTORIO_H_ */
