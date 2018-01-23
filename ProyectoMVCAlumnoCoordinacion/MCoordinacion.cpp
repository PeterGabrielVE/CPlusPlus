/*
 * MCoordinacion.cpp
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#include "MCoordinacion.h"

/*aqui va el contructor...
te faltaba inicializar..*/

MCoordinacion::MCoordinacion()
{
 contNot20=contAlu=contAplazados=contAprobados=0;
 acumNota=0;
}


float MCoordinacion::getAcumNota()
{
    return acumNota;
}

int MCoordinacion::getContAlu()
{
    return contAlu;
}

int MCoordinacion::getContAplazados()
{
    return contAplazados;
}

int MCoordinacion::getContAprobados()
{
    return contAprobados;
}

int MCoordinacion::getContNot20()
{
    return contNot20;
}




void MCoordinacion::procesarAlumnos(MAlumno ma)
{
	++contAlu;
	if(ma.getNota() >= 10)
		{
		 ++contAprobados;

		  acumNota += ma.getNota();
		} //faltaban las dos llaves, porq hay 2 o as instrucciones q dependen del if
	else
	// no hace falta preguntar, if(ma.getNota() < 10), solo haces el "else", y listo.
	  ++contAplazados;

	if (ma.getNota() == 20)
		++contNot20;

}
float MCoordinacion::promedioNotasA()
{
	float prom = 0.00;
	prom = acumNota/contAprobados;
	return prom;
}

float MCoordinacion::porcAplazados()
{
	float porc = 0.00;
	if(contAlu > 0)
	porc = (contAplazados*100)/contAlu;
	return porc;
}


