/*
 * MEmpleado.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MEmpleado.h"

MEmpleado::MEmpleado()
{
	// TODO Auto-generated constructor stub

}

void MEmpleado::SetDiaIni(int diai)
{
	diaini=diai;
}



void MEmpleado::SetDiaFin(int diaf)
{
	diafin=diaf;
}



void MEmpleado::SetSueldoD(float sb)
{
	sueldoD=sb;
}



int MEmpleado::GetDiaIni()
{
	return diaini;
}



int MEmpleado::GetDiaFin()
{
	return diafin;
}



float MEmpleado::GetSueldoD()
{
	return sueldoD;
}



int MEmpleado::CntDiasDisfrute()
{
	return diafin - diaini + 1;
}



float MEmpleado::SueldoVacacional()
{
	return sueldoD * CntDiasDisfrute();
}

float MEmpleado::calcBonoEspecial()
{
	if(edocivil==1)
		return SueldoVacacional()*0.05;
	else
	if(edocivil==2)
	return SueldoVacacional()*0.07;
	else
	return 0;
}





