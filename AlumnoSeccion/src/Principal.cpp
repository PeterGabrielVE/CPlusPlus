/*
 * Principal.cpp
 *
 *  Created on: 25/05/2012
 *  Author: Gabriel Leal
 *  Aplicación que determina:
 *  -La cantidad de alumnas de la  sección
 *  -Promedio de mujeres con notas igual a b (calificacion comprendida entre 16 - 18 pts)
 *  -Porcentaje de varones aprobados de la sección
 *  -Promedio de alumnas reprobadas
 *
 */

#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>
#include "Alumno.h"
#include "Seccion.h"
using namespace std;

string laCedula;
char elSexo;
int laNota;


void IEAlumno (Alumno &elAlumno);
void ISSeccion (Seccion laSeccion);
void conFor ();

int main()
{
	conFor();
	cout << "Adios...!!!" << endl;
	return 0;
}

void conFor()
{
	Alumno elAlumno;
	Seccion laSeccion;




	cout << "...Ciclo utilizando un FOR..." <<endl;
	cout << " Ingrese 4 alumnos, por favor" <<endl;
	for (int i = 1; i <= 4; i++)
	{
		cout <<" ====== Datos del Alumno # "<< i << " ====== "<< endl;
		cout << "Ingrese el Numero de Cedula:" <<endl;
	    cin>> laCedula;
		cout <<"Ingrese el Sexo M(asculino) F(emenino):" <<endl;
		cin>> elSexo;
		cout<<"Ingrese la Nota: " <<endl;
		cin>> laNota;

		IEAlumno (elAlumno);
		laSeccion.acumularNotas (elAlumno);
		laSeccion.acumularNotasMB(elAlumno);
		laSeccion.AcumularAR(elAlumno);
		laSeccion.contarAlumnas (elAlumno);
		laSeccion.contarReprobados (elAlumno);
		laSeccion.contarMB(elAlumno);
		laSeccion.contarVA (elAlumno);
		laSeccion.contarAlumnasR(elAlumno);
	}
	ISSeccion (laSeccion);
	system ("pause");
}

void IEAlumno (Alumno &elAlumno)
{

	elAlumno.asignarCedula(laCedula);
	elAlumno.asignarSexo(elSexo);
	elAlumno.asignarNota(laNota);
}

void ISSeccion (Seccion laSeccion)
{
	cout << "ESTADISTICAS DE LA SECCION:" << endl;
	cout << "El Promedio de la Seccion es: " << laSeccion.promediarNotas () << " Pts. " <<endl;
	cout << "la Cantidad de Alumnas :" << laSeccion.obtenerContAlumnas() << endl;
	cout << "El % de Alumnos Reprobados es: " << laSeccion.calcularPorcReprobados()<< " % "<< endl;
	cout << "El Promedio de Alumnas con nota igual a B: " << laSeccion.promediarMB() << " Pts. " << endl;
	cout << "El % de Varones aprobados en la seccion es: " << laSeccion.calcularPorcVA() << " % "<< endl;
	cout << "El Promedio de alumnas Reprobadas es: " << laSeccion.promediarAlumnaRe()<< " Pts. " <<endl;
	system ("pause");
}






