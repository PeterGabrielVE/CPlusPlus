/*
 * Seccion.cpp
 *
 *  Created on: 18/07/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Seccion.h"

Seccion::Seccion()
{
	ptr=0;

}

void Seccion::setPtr(int elPtr)
{
	ptr=elPtr;
}



int Seccion::getPtr()
{
	return ptr;
}



void Seccion::setAEstudiante(Estudiante elEstudiante)
{
	AEstudiante[ptr]=elEstudiante;
	ptr++;
}



Estudiante Seccion::getAEstudiante(int i)
{
	return AEstudiante[i];
}



float Seccion::promediarMas()
{
	float acumNota=0;
	int contMas=0;

	for(int i=0; i<ptr; i++)
	{
	if(AEstudiante[i].getSexo()=='M' and AEstudiante[i].getNota()< 10)
		{
		contMas++;
	acumNota=acumNota + AEstudiante[i].getEdad();
		}
	}
	return acumNota/contMas;


}



Estudiante Seccion::mayorNota()
{

	Estudiante laMejor;
	int poMejor=0;

for(int i=0; i<ptr; i++)
{
	if(AEstudiante[i].getSexo()=='F'and AEstudiante[i].getNota()>AEstudiante[poMejor].getNota())

	poMejor=i;
}

	return AEstudiante[poMejor];
}



float Seccion::calcularPorc()
{
	int contMas=0;
	float porcMas=0.00;

	for(int i=0; i<ptr; i++)
	{
		if(AEstudiante[i].getSexo()=='M' and AEstudiante[i].getNota()>= 10)
			contMas++;
	}
	return porcMas=(contMas*100)/ptr;
}


float Seccion::promediarN()
{
	float acumNotaGral=0.00, promG=0;

	for(int i=0; i<ptr; i++)
	{
	acumNotaGral=acumNotaGral + AEstudiante[i].getNota();
	}

	return promG=acumNotaGral/ptr;
}
