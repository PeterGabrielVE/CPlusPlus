/*
 * MAlumno.cpp
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#include "MAlumno.h"



MAlumno::MAlumno() {}

string MAlumno::getCedu()
{
    return cedu;
}

string MAlumno::getNom()
{
    return nom;
}

float MAlumno::getNota()
{
    return nota;
}

void MAlumno::setCedu(string c)
{
    cedu = c;
}

void MAlumno::setNom(string n)
{
    nom = n;
}

void MAlumno::setNota(float no)
{
    nota = no;
}

string MAlumno::detletra()
{
	string letra;
	if(nota <= 9)
		letra = "E";
	else
	{
		if(nota <= 12)
			letra ="D";
		else
		{
			if(nota <=15)
				letra = "C";
			else
			{
				if (nota <= 18)
					letra = "B";
				else
					letra = "A";
			}
		}
	}
	return letra;
}



