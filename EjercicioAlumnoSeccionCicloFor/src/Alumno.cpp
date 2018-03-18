/*
 * Alumno.cpp
 *
 *  Created on: 22/06/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Alumno.h"

Alumno::Alumno()
{
	// TODO Auto-generated constructor stub

}
void Alumno::AsignarCedula(int laCed)
{
	Cedula = laCed;
}
int Alumno::ObtenerCedula()
{
	return Cedula;
}
void Alumno::AsignarNota(float laNota)
{
	Nota = laNota;
}
float Alumno::ObtenerNota()
{
	return Nota;
}
void Alumno::AsignarSexo(char elSexo)
{
	Sexo = elSexo;
}

char Alumno::ObtenerSexo()
{
	return Sexo;
}

string Alumno::CalNotaL()
{
	string NotaL;
	if (Nota< 21 and Nota>= 19)
	{
		NotaL = " Es A";
	}
	else
		if (Nota< 19 and Nota>=16)
		{
			NotaL = "Es B";
		}
		else
			if (Nota< 16 and Nota>=13)
			{
				NotaL = "Es C";
			}
			else
				if (Nota< 13 and Nota>= 10)
				{
					NotaL = "Es D";
				}
				else
				{
					NotaL = "Es E";
				}
	return NotaL;
}


