/*
 * VEmpleado.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */


#include "MEmpleado.h"

MEmpleado::MEmpleado() {
}

void MEmpleado::SetDiaIni(int di) {
	diaini=di;
}

void MEmpleado::SetDiaFin(int df) {
	diafin=df;
}

void MEmpleado::SetSueldoD(float sb) {
	sueldod=sb;
}

int MEmpleado::GetDiaIni() {
	return diaini;
}

int MEmpleado::GetDiaFin() {
	return diafin;
}

float MEmpleado::GetSueldoD() {
	return sueldod;
}

int MEmpleado::CantDiasDisfrute() {
	return diafin- diaini +1;
}

float MEmpleado::SueldoVacacional() {
	return  sueldod * CantDiasDisfrute();
}
