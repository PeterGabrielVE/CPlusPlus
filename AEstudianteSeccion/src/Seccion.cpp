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



float Seccion::promediarN()
{
	float acumNota=0.00, promG=0;

	for(int i=0; i<ptr; i++)
	{
	acumNota=acumNota + AEstudiante[i].getNota();
	}

	return promG=acumNota/ptr;
}



//int Seccion::mayorNota()
//{
//	int contMMN=0;//contador de masculino mayor nota
//	float mayoralProm=promediarN();

	//for(int i=1; i<ptr; i++)
	//{
	//	if(AEstudiante[i].getSexo()=='M'and AEstudiante[i].getNota()>mayoralProm)

		//	contMMN++;
	//}

//	return contMMN;
//}



float Seccion::calcularPorc()
{
	int contFem=0;
	float porcFem=0.00;

	for(int i=0; i<ptr; i++)
	{
		if(AEstudiante[i].getSexo()=='F')
			contFem++;
	}
	return porcFem=(contFem*100)/ptr;
}



