/*
 * principal.cpp
 *
 *  Created on: 30/01/2013
 *      Author: Pedro Gabriel Leal
 */

#include <iostream>
#include <stdlib.h>
#include "Seccion.h"
#include "Materia.h"

using namespace std;

void IESeccion (Seccion &laSeccion);
void ISalida (Seccion &laSeccion, Materia &laMateria);

int main ()
{
	Seccion laSeccion;
	Materia laMateria;
	int i;
	for (i=1; i<=3; i++)
	{
		cout<<"==============================="<<endl;
		cout<<"Seccion # "<< i << endl;
		cout<<"==============================="<<endl;
		IESeccion (laSeccion);

		laSeccion.CalcPromSec();
		laSeccion.CalcEstAprob();
		laMateria.setContS();
		laMateria.setAcumProm(laSeccion);
		laMateria.setMenorProm(laSeccion);
		laMateria.setMayorAprob(laSeccion);
	}
	ISalida (laSeccion, laMateria);
	return 0;
}


void IESeccion (Seccion &laSeccion)
{
	int CantAl, EstApl;
	float NotaS;


	cout<<"Ingrese la cantidad de alumnos: "<<endl;
	cin>>CantAl;
	laSeccion.setCantAlum(CantAl);
	cout<<"Ingrese la cantidad de estudiantes aplazados: "<<endl;
	cin>>EstApl;
	laSeccion.setEstAplazados(EstApl);
	cout<<"ingrese la sumatoria de las notas: "<<endl;
	cin>>NotaS;
	laSeccion.setNotaSec(NotaS);

}
void ISalida (Seccion &laSeccion, Materia &laMateria)
{
	cout<<"el promedio de introducci�n a la computaci�n es de: "<<laMateria.CalcPromMat()<<", la secci�n con mayor cantidad de aprobados es: "<<laMateria.getMayorAprob()<<" y la Secci�n con menor promedio es: "<<laMateria.getNrSeccionMen()<<endl;
}

