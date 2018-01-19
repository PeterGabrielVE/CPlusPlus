/*
 * principal.cpp
 *
 *  Created on: 01/02/2013
 *  Author: Gabriel Leal
 *  De 50 estudiantes de una Sección se conoce la cedula, el sexo y la edad. Escriba un
 * programa que lea los datos, los cargue en un arreglo y muestre por pantalla:
 * a. Un listado de todos los estudiantess mayores de edad.
 * b. Cantidad de Estudiantes cuyas edades sean mayor al promedio de edad de la Sección.
 * c. El alumno Masculino de Mayor Edad.
 * d. Porcentaje de estudiantes del sexo Femenino.
 */

#include <iostream>
#include <string>
#include <stdlib.h>

#include "Seccion.h"
#include "Alumno.h"

using namespace std;
void IESeccion(Seccion &laSeccion);
void ISSeccion(Seccion laSeccion);
void IEAlumno(Alumno &elAlumno);


int main()
{
	Seccion laSeccion;

	IESeccion(laSeccion);
	ISSeccion(laSeccion);
	system ("pause");
	return 0;
}

void IESeccion(Seccion &laSeccion)
{
	Alumno elAlumno;
	for (int i=0; i < MAX ; i++)
	{
		cout << "DATOS DEL ALUMNO #" << i+1 << endl;
		IEAlumno(elAlumno);
		laSeccion.setAlumno(elAlumno);
		cout << "--------------------------------" << endl;
	}
}

void ISSeccion (Seccion laSeccion)
{
	cout << "El promedio de la sección es: " << laSeccion.calcProm() << endl;
	cout << "Hay " << laSeccion.contarAlumSP() << " alumnas sobre el promedio" << endl;
}

void IEAlumno (Alumno &elAlumno)
{
	string laCedula;
	char elSexo;
	float laNota;

	cout << "Ingrese la cedula del alumno: " << endl;
	cin >> laCedula;
	cout << "Especifique el sexo del alumno, (M)asculino ó (F)emenino: " << endl;
	cin >> elSexo;
	cout << "Ingrese la nota del alumno: " << endl;
	cin >> laNota;
	elAlumno.setCedula(laCedula);
	elAlumno.setSexo(elSexo);
	elAlumno.setNota(laNota);
}


