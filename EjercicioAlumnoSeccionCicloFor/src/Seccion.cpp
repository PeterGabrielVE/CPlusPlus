/*
 * Seccion.cpp
 *
 *  Created on: 22/06/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Seccion.h"
#include "Alumno.h"
Seccion::Seccion()
{
	// TODO Auto-generated constructor stub

}
void Seccion::InicializarS()
{
	ContAR = 0;
	ContHA = 0;
	ContH = 0;
	ContMB = 0;
	ContMSP = 0;
	AcumN = 0.0;
	AcumMB = 0.0;
	ContMR = 0;
	ContHR = 0;
	ContAA = 0;
	AcumNAR = 0.0;
}
void Seccion::CalContAR(Alumno elAlumno)
{
	if (elAlumno.ObtenerNota()< 10)
	{
		ContAR = ContAR + 1;
	}
}

void Seccion::CalContHA(Alumno elAlumno)
{
	if (elAlumno.ObtenerSexo()== 'M' and elAlumno.ObtenerNota()>=10)
	{
		ContHA = ContHA + 1;
	}
}

void Seccion::CalContH(Alumno elAlumno)
{
	if (elAlumno.ObtenerSexo()== 'M')
	{
		ContH = ContH + 1;
	}
}

void Seccion::CalContMB(Alumno elAlumno)
{
	if (elAlumno.ObtenerSexo()== 'F' and elAlumno.ObtenerNota()<19 and elAlumno.ObtenerNota()>=16)
	{
		ContMB = ContMB + 1;
	}
}

void Seccion::CalContMSP(Alumno elAlumno)
{
if (elAlumno.ObtenerSexo()== 'F' and elAlumno.ObtenerNota()> CalPromS ())
	{
		ContMSP = ContMSP + 1;
	}
}

int Seccion::ObtenerContMSP()
{
	return ContMSP;
}

void Seccion::CalAcumN(Alumno elAlumno)
{
	AcumN = AcumN + elAlumno.ObtenerNota();
}

void Seccion::CalAcumMB(Alumno elAlumno)
{
	if (elAlumno.ObtenerNota()<19 and elAlumno.ObtenerNota()>=16 and elAlumno.ObtenerSexo()== 'F')
	{
		AcumMB = AcumMB + elAlumno.ObtenerNota();
	}
}

float Seccion::CalPromS()
{
	float PromS;
	PromS = AcumN/4;
	return PromS;
}

float Seccion::CalPorcAR()
{
	float PorcAR;
	PorcAR = (ContAR * 100)/4;
	return PorcAR;
}

float Seccion::CalPromMB()
{
	float PromMB;
	PromMB = 0;
	if (ContMB > 0)
	PromMB = AcumMB/ContMB;
	return PromMB;
}

float Seccion::CalPorcHA()
{
	float PorcHA;
	PorcHA = 0;
	if (ContH > 0)
	PorcHA = (ContHA * 100)/ContH;
	return PorcHA;
}

void Seccion::CalContMR(Alumno elAlumno)
{
	if (elAlumno.ObtenerSexo()== 'F' and elAlumno.ObtenerNota()< 10)
	{
		ContMR = ContMR + 1;
	}
}



void Seccion::CalContHR(Alumno elAlumno)
{
	if (elAlumno.ObtenerSexo()== 'M' and elAlumno.ObtenerNota()< 10)
	{
		ContHR = ContHR + 1;
	}
}



void Seccion::CalContAA(Alumno elAlumno)
{
	if (elAlumno.ObtenerNota()< 21 and elAlumno.ObtenerNota()>= 19)
	{
		ContAA = ContAA + 1;
	}
}



int Seccion::ObtenerContAA()
{
	return ContAA;
}



float Seccion::CalPorcMR()
{
	float PorcMR;
	PorcMR = (ContMR * 100)/4;
	return PorcMR;
}



float Seccion::CalPorcHR()
{
	float PorcHR;
	PorcHR = (ContHR * 100)/4;
	return PorcHR;
}

void Seccion::CalAcumNAR(Alumno elAlumno)
{
	if (elAlumno.ObtenerNota()< 10)
	{
		AcumNAR = AcumNAR + elAlumno.ObtenerNota();
	}
}



float Seccion::CalPromAR()
{
	float PromAR;
	PromAR = 0;
	if (ContAR > 0)
	PromAR = AcumNAR/ContAR;
	return PromAR;
}

int Seccion::ObtenerContMB()
{
	return ContMB;
}



float Seccion::ObtenerAcumMB()
{
	return AcumMB;
}








