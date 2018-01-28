/*
 * Seccion.cpp
 *
 *  Created on: 15/07/2012
 *      Author: Pedro Leal
 */

#include "Seccion.h"

Seccion::Seccion() {
	// TODO Auto-generated constructor stub
	ptr = 0;

}

void Seccion::setAEstudiante(Estudiante elE)
{
	AEstudiante[ptr] = elE;
	ptr++;
}



Estudiante Seccion::getAEstudiante(int pos)
{
	return AEstudiante[pos];
}



int Seccion::getPtr()
{
	return ptr;
}



float Seccion::calPorcSF()
{
			float porc;
			int contM=0;
			for(int i=0; i<ptr; i++)
			{

				if(AEstudiante[i].getSexo()=='F')

				contM= contM +1;

			if(contM>0)
				porc= (contM*100)/ ptr;
			else
				porc=0;
			}
			return porc;

}


Estudiante Seccion::determinarMayor()
{
	int posMayor = 0;
	for (int i= 0; i< ptr; i++)
	{
		if (AEstudiante[i].getSexo() == 'M' and AEstudiante[i].getEdad() > AEstudiante[posMayor].getEdad())
			posMayor = i;
	}
	return AEstudiante[posMayor];
}



float Seccion::promediarEdad()
{
	int acumEM = 0;
	float elProm;
	for (int i=0; i<ptr; i++)
	{
		acumEM = acumEM + AEstudiante[i].getEdad();
	elProm = acumEM / ptr;
	}
	return elProm;
}


Estudiante Seccion::determinarMenor()
{
	int posMenor=0;
		for(int i=0; i<ptr; i++)
				if(AEstudiante[i].getSexo()== 'F')
			{
				if(AEstudiante[i].getEdad()< AEstudiante[posMenor].getEdad())
					posMenor=i;
			}
		return AEstudiante[posMenor];
}

int Seccion::contAM()
{
	int contAME = 0;
	for (int i=0; i<ptr; i++)
	{
		if (AEstudiante[i].getEdad()> 18)
			contAME ++;
		else
			contAME = 0;
	}
	return contAME;
}

int Seccion::contarEMP()
{

		int contA=0;
		for(int i=0; i<ptr; i++)
			{
				if(AEstudiante[i].getEdad()>=18)
				contA= contA +1;
			}
		return contA;
}





