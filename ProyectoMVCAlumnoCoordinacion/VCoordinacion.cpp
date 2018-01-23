/*
 * VCoordinacion.cpp
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#include "VCoordinacion.h"

VCoordinacion::VCoordinacion() {
}

void VCoordinacion::ImprimirReporte(int cant20, float porcen, float promedio)
{
	system ("cls");
	cout <<"\t\t\t\nINFORMACION DE LA COORDINACION"<<endl;
	cout <<"\t\t\t\n===========================\n"<< endl;
	cout <<"\nCantidad de Alumnos con Calificacion 20:"<< cant20 <<" Alumnos" <<endl;
	cout <<"\nPorcentaje de Alumnos Aplazados: "<< setiosflags (ios::fixed)<< setprecision (3)<< porcen <<"%"<<endl;
	cout <<"\nPromedio de Notas de Alumnos Aprobados:"<< setiosflags (ios::fixed)<< setprecision (2)<< promedio<<"/20"<< endl;
	system ("pause");

}



