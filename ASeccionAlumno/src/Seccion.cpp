/*
 * Seccion.cpp
 *
 *  Created on: 16/03/2013
 *      Author: Gabriel
 */

#include "Seccion.h"

Seccion::Seccion()
{
	ptr=0;
	MAX=3;
	// TODO Auto-generated constructor stub

}

Alumno Seccion::getAAlumno(int i)
{
	return AAlumno[i];
}



bool Seccion::setAAlumno(Alumno elAlumno)
{
	bool PuedeCont;
	if (ptr < MAX)
	{
	AAlumno [ptr] = elAlumno;
	ptr++;
	PuedeCont=true;
	}
	else
		PuedeCont=false;
			return PuedeCont;


}



int Seccion::getPtr()
{
	return ptr;
}



int Seccion::Buscador(string elNombre)
{
	int i=0 , posi=-1;
		while (i<ptr and posi==-1)
		{
			if(AAlumno[i].getNombre()==elNombre)
				posi=i;
			else
				i++;
		}
		return posi;
}

int Seccion::getMAX()
{
	return MAX;
}

float Seccion::CalcPorcAP()
{
	float PorcAP=0.00;
	int ContAProbado=0;
	for(int i=0;i<ptr;i++)
	{
		if(AAlumno[i].getNota()>48)
			ContAProbado=ContAProbado +1;
	}
	return PorcAP=(ContAProbado*100)/ptr;
}






