/*
 * Universidad.cpp
 *
 *  Created on: 25/02/2013
 *  Author: Gabriel Leal
 */

#include "Universidad.h"

Universidad::Universidad() {
	ptr=0;
	Mayor.setSueldo(0);
	int i;
	for(i=0; i<MAX; i++)
	{
		Arr_Empleado[i].InicializarE();

	}

}

int Universidad::getptr()
{
	return ptr;
}

bool Universidad::setArr_Empleado(Empleado elEmpleado)
{

	if(ptr<MAX)
	{
	Arr_Empleado[ptr]=elEmpleado;
	ptr++;
	return true;
	}
	else
		return false;
}



Empleado Universidad::getArr_Empleado(int i)
{
	return Arr_Empleado[i];
}



int Universidad::BuscadorEmCI(string laCedula)
{

	int i=0 , posi=-1;
	while (i<ptr and posi==-1)
	{
		if(Arr_Empleado[i].getCedula()==laCedula)
			posi=i;
		else
			i++;
	}
	return posi;
}



int Universidad::ConsultaTipoEmpleado(string elTipo)
{
	int i, enc;
	for (i=0; i<ptr; i++)
	{
		if(Arr_Empleado[i].getTipoE()==elTipo)
			enc=i;
		else
			i++;

	}
	return enc;
}

Empleado Universidad::DetMayor()
{
	for(int i=1;i<ptr;i++)
	{
		if(Arr_Empleado[i].getSueldo()>Mayor.getSueldo())
			Mayor=Arr_Empleado[i];
	}
	return Mayor;
}

int Universidad::CantProf()
{
	int ContP=0;
	for(int i=0; i<ptr; i++)
	{
		if(Arr_Empleado[i].getTipoE() == "Profesor")
			ContP++;
	}
	return ContP;
}

int Universidad::CantAdm()
{
	int ContA=0;
	for (int i=0; i<ptr; i++)
	{
		if(Arr_Empleado[i].getTipoE() == "Administrador")
		ContA++;
	}
	return ContA;
}



int Universidad::CantObreros()
{
	int ContO=0;
	for(int i=0; i<ptr; i++)
	{
		if(Arr_Empleado[i].getTipoE()=="Obrero")
			ContO++;
	}
	return ContO;
}



