/*
 * Controlador.cpp
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {

}

void Controlador::ProcesarCoordinacion()
{
	MAlumno ma;
	VAlumno va;
	string c,n;
	float no;
	int resp;

	do
	{
		system ("cls");
		cout <<"\t\tDatos de los Alumnos:"<< endl;
		cout <<"\t\t\n=================="<< endl;
		c = va.leerCed();
		n = va.leerNom();
		no = va.leerNota();
		ma.setCedu(c);
		ma.setNom(n);
		ma.setNota(no);
		va.ImprimirOperario(ma.getCedu(), ma.getNom(), ma.detletra());
		mc.procesarAlumnos(ma);
		cout <<"Desea Procesar Otro Alumno? (1)Si/(2)No"<<endl;
		cin >> resp;

	}while (resp == 1);
}



void Controlador::Reporte()
{
	VCoordinacion vc;
	vc.ImprimirReporte(mc.getContNot20(), mc.porcAplazados(), mc.promedioNotasA());
}



