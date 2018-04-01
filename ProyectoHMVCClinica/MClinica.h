/*
 * MClinica.h
 *
 *  Created on: 26/01/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MCLINICA_H_
#define MCLINICA_H_
#include "MPaciente.h"
#include <vector>
class MClinica {
private	:
	vector <MPaciente> vecpacientes;

public:
	MClinica();
	void IncluirPaciente(MPaciente mp);
	int CantidadPacientes();
	int BuscarPaciente(string ced);
	void SetPaciente(MPaciente mp, int posicion);
	MPaciente GetPaciente(int posicion);


	int ContarPacPorTurno(int);
	float CalcMontoTotCons();
	float CalcMontoTotHosp();
	float CalcMayor();
	vector<string> DetVCedMayor();


};

#endif /* MCLINICA_H_ */
