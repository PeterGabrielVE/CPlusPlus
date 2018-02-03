/*
 * Consultorio.cpp
 *
 *  Created on: 06/02/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Consultorio.h"

Consultorio::Consultorio() {

	ContPaciente=0;
	ContPacientePI=0;
	ContPacienteEst=0;

}

int Consultorio::getContPaciente()
{
	return ContPaciente;
}



int Consultorio::getContPacientePI()
{
	return ContPacientePI;
}



void Consultorio::ContarPaciente()
{
	ContPaciente=ContPaciente+1;
}



float Consultorio::CalcularPorcentajePI()
{
	float PorcentajePI;
	PorcentajePI=(ContPacientePI*100)/ContPaciente;
	return PorcentajePI;
}

int Consultorio::getContPacienteEst()
{
	return ContPacienteEst;
}

string Consultorio::DeterminarCondicion(Paciente elPaciente)
{
	string Condicion;
	if(elPaciente.getPeso()>elPaciente.CalcularPesoI())
		Condicion="Tiene Sobrepeso";
	else
	{
		Condicion="No tiene Sobrepeso";
		ContPacientePI=ContPacientePI+1;

	}
	return Condicion;
}

string Consultorio::DeterminarEstaturaM(Paciente elPaciente)
{

		string EstaturaM;
		if(elPaciente.getAltura()<180)
			EstaturaM=" La estatura no es mayor a 180 cm";

		else
		{
		    EstaturaM="La estatura es mayor";
		    ContPacienteEst=ContPacienteEst +1;
		}
		return EstaturaM;

}

float Consultorio::CalcularPorcentajePE()
{
	float PorcentajePE;
		PorcentajePE=(ContPacienteEst*100)/ContPaciente;
		return PorcentajePE;
}







