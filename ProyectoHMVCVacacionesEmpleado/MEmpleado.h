/*
 * MEmpleado.h
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MEMPLEADO_H_
#define MEMPLEADO_H_
#include "MPersona.h" // clase gen�rica

class MEmpleado:public MPersona
{

private:
	int diaini, diafin;
	float sueldoD;
public:
	MEmpleado();
	void SetDiaIni(int);
	void SetDiaFin(int);
	void SetSueldoD(float);
	int GetDiaIni();
	int GetDiaFin();
	float GetSueldoD();
	int CntDiasDisfrute();
	float SueldoVacacional();
	float calcBonoEspecial();
	/*MEmpeado hereda de MPersona los atributos cedula y nombre y con estos
    se completan los atributos requeridos por MEmpleado */
};

#endif /* MEMPLEADO_H_ */
