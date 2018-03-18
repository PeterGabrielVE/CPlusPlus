/*
 * Principal.cpp
 *
 *  Created on: 16/03/2013
 *      Author: Pedro Gabriel Leal
 *
 *
 * Se tiene el nombre de cada alumno y la calificaci�n (0�100) en Introducci�n a la Computaci�n
 *  de un grupo, este grupo no puede pasar de 50.

Se le pide:

a) Cargar los arreglos respectivos validando que no se supere el tama�o m�ximo del arreglo.

b) Dado el nombre de un alumno, decir si puede inscribir Programaci�n I. (Debe tener 48
 puntos o m�s en Introducci�n). Si el alumno no existe mostrar un mensaje con el error.
  Esta opci�n debe mantenerse ejecutando hasta que el usuario lo decida.

c) Listado ordenado en orden ascendente por calificaci�n, s�lo para los que aprobaron
 Introducci�n.
d) Porcentaje de estudiantes que est�n por encima del promedio.
 *
 */
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Seccion.h"
#include "Alumno.h"

using namespace std;

bool IESeccion(Seccion &laSeccion);
void ISSeccion(Seccion laSeccion);
void ListadoCondicionado(Seccion laSeccion);
void BuscarNombre(string Nombre, Seccion laSeccion);


int main()
{
		Seccion laSeccion;
		bool PuedeCont;
		char Resp;
		Resp='s';
		while (Resp=='s' or Resp=='S')
		{
			PuedeCont=IESeccion(laSeccion);
			if (PuedeCont)
			{
				cout<<" ¿ Desea ingresar otro alumno ? S/N ";
				cin>>Resp;
			}
			else
			{
				cout<<"No se pueden procesar el arreglo esta lleno, favor comun�quese con el administrador"<<endl;
				Resp='n';
			}
	}
		ISSeccion(laSeccion);
		return 0;
}


bool IESeccion(Seccion &laSeccion)
	{
		Alumno elAlumno;
		bool PuedeCont;
		string elNombre;
		float laNota;
		cout<<"Ingrese el nombre : "<<endl;
		cin>>elNombre;
		elAlumno.setNombre(elNombre);
		cout<<"Ingrese la Nota: "<<endl;
		cin>>laNota;
		elAlumno.setNota(laNota);
		PuedeCont=laSeccion.setAAlumno(elAlumno);
		return PuedeCont;
	}


void ListadoCondicionado(Seccion laSeccion)
{
	Alumno elAlumno;
	cout<< "LISTADO CONDICIONADO - Nota>48 n\n";
	cout<< " Nombre       Nota \n ";
	for(int i=0;i<MAX;i++)
	{
		elAlumno=laSeccion.getAAlumno(i);
		if(elAlumno.getNota()>48)

		cout<<elAlumno.getNombre()<<"    "<<elAlumno.getNota()<<"   "<<endl;
	}
}



void ISSeccion(Seccion laSeccion)
{
	ListadoCondicionado(laSeccion);
	cout<<" El porcentaje de alumnos por encima del promedio es de: "<<"%"<<laSeccion.CalcPorcAP()<<endl;
	laSeccion.OrdenarMayor();
}
void BuscarNombre(string Nombre, Seccion laSeccion)
{

	Alumno elAlumno;
	string elNombre,Condicion;
	int posi;
		cout<<"Introduzca nombre a buscar:" << endl;
		cin >> elNombre;
		posi=laSeccion.BuscarNombre(elNombre);
		if(posi!=-1)
		{
			cout <<"El nombre existe en la posicion: " << posi << endl;
			laSeccion.getAAlumno(posi).getNombre();
			if(laSeccion.getAAlumno(posi).getNota()>48)
			{
				Condicion= "Si puede Inscribir Programacion I";

			}

		}
		else
			cout <<"No existe" << endl;
			system("pause");




}

