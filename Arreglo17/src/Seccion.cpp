/*
 * Seccion.cpp
 *
 *  Created on: 16/03/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Seccion.h"

Seccion::Seccion()
{
	ptr=0;

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
	PuedeCont= true;
	}
	else
		PuedeCont=false;
	return PuedeCont;
}



int Seccion::getPtr()
{
	return ptr;
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

int Seccion::BuscarNombre(string elNombre)
{

	int i=0 , posi=-1;
	while (i<ptr and posi==-1)
	{
		if(AAlumno[i].getNombre()==Nombre)
			posi=i;
		else
			i++;
	}
	return posi;
}
void Seccion::OrdenarMayor()
{
	Alumno elAlumno;
	int Pos1,Pos2;
	for(Pos1=0;Pos1<Nota;Pos1++)
	{
		for(Pos2=Pos1;Pos2<Nota;Pos2++)
		{
			if(AAlumno[Pos1].getNota()<AAlumno[Pos2].getNota())
			{
				elAlumno=AAlumno[Pos1];
			    AAlumno[Pos1]=AAlumno[Pos2];
			    AAlumno[Pos2]=elAlumno;
			}

		}

	}
}

