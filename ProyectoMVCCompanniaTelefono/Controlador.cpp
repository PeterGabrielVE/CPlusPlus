/*
 * Controlador.cpp
 *
 *  Created on: 04/07/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
}

void Controlador::ProcesarCompania()
{
	VLlamadas vl;
	VCompannia vc;
	MLlamada ml;

	float dur;
	int tip,resp;
	string n,d,r;

	system("cls");
	cout<<"\nDATOS DE LA COMPANIA :\n";
	cout<<"\n ====================== \n";

	n=vc.leerNombre();
	r=vc.leerrif();
	d=vc.leerdireccion();

	mc.setnombre(n);
	mc.setrif(r);
	mc.setdireccion(d);

	do
	{
		system("cls");
		cout<<"\nDATOS DE LA LLAMADA: \n "<<endl;
		cout<<"\n ================== \n";

		dur=vl.leerduracion();
		tip=vl.leertipollamada();

		ml.setduracion(dur);
		ml.settipo(tip);
		mc.ProcesarLlamadas(ml);
		cout<<"Desea procesar otra llamada? (1) si (2) no: ";
		cin>>resp;
	}
	while(resp==1);
}

void Controlador::Reporte()
{

	vc.Imprimirllamadas(mc.getnombre(),mc.getrif(),mc.getdireccion(), mc.getacumtotal(), mc.calcmayortipollamada());
}




