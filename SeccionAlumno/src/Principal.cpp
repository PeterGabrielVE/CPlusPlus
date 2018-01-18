/*
 * Principal.cpp
 *
 *  Created on: 18/06/2012
 *  Author: Gabriel Leal
 *  Se dispone de los datos de 32 alumnos de la Sección.
 *  Por cada uno se conoce: nombre y edad.
 *  Calcular por cada alumno si es mayor o menor de edad y calcular por sección:
	a) La edad mayor
	b) Cantidad de alumnos menores de edad
 */

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Alumno.h"
#include "Seccion.h"

using namespace std;

void IEAlumno (Alumno &elAlumno);
void ISAlumno (Alumno &elAlumno);
void ISeccion (Seccion &laSeccion);
void conFor();

int main()
{
	conFor();
			cout << "Adios..." <<endl;
	return 0;

}

void conFor ()
{
	int i=1;
	Alumno elAlumno;
	Seccion laSeccion;
	cout << "... ciclo utilizando un For..."<<endl;
	for(i=1; i<=3;i++)
	{

	cout<<"========= Datos del Alumno #"<<i<<" ========="<<endl;
		IEAlumno(elAlumno);
		laSeccion.ContarMenores(elAlumno);
	    laSeccion.determinarMayor(elAlumno);
	    ISAlumno (elAlumno);

   }

	ISeccion(laSeccion);
}


void IEAlumno(Alumno &elAlumno){

	int edad;
	string nombre;


	cout<<"Ingrese el nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingrese la edad: "<<endl;
	cin>>edad;
	elAlumno.setNombre(nombre);
	elAlumno.setEdad(edad);

}

void ISAlumno(Alumno &elAlumno){

	cout<<"El alumno es : "<<elAlumno.determinarCodicion()<<endl;

}

void ISeccion(Seccion &laSeccion){

	cout<<" ============== Estadistica de la Seccion ================= "<<endl;
	cout<<"La edad mayor de la seccion es : "<<laSeccion.getEdadMayor()<<endl;
	cout<<"La cantidad de alumnos menores de edad es: "<<laSeccion.getcontMenores()<<endl;

}



