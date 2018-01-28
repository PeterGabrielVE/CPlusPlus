/*
 * Principal.cpp
 *
 *  Created on: 16/03/2013
 *      Author: Gabriel
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

bool IEntrada(Seccion &laSeccion);
void ISalida(Seccion laSeccion);
void Buscador(Seccion laSeccion);



int main()
{
	Seccion laSeccion;
	bool PuedeCont;
	char Resp;
	Resp='s';
   while (Resp=='s' or Resp=='S')
	{
			PuedeCont=IEntrada(laSeccion);
			if (PuedeCont)
			{
				cout<<"�Desea ingresar otro alumno?";
				cin>>Resp;
			}
			else
			{
				cout<<"No se pueden procesar el arreglo esta lleno, favor comun�quese con el administrador"<<endl;
				Resp='n';
			}
		}

	  ISalida(laSeccion);
		return 0;
}

bool IEntrada(Seccion &laSeccion)
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


void Buscador(Seccion laSeccion)
{
	Alumno elAlumno;
	string elNombre,Condicion;
	int posi;
	cout << endl << "Introduzca nombre a buscar:" << endl;
	cin >> elNombre;
	posi=laSeccion.Buscador(elNombre);
	if(posi!=-1)
	{
		cout << endl << "El nombre existe en la posicion: " << posi << endl;
		laSeccion.getAAlumno(posi).getNombre();
		if(laSeccion.getAAlumno(posi).getNota()>48)
				{
							Condicion= "Si puede Inscribir Programacion I";
				}else{
					cout << endl << "No existe" << endl << endl;
				}
	}
	system("pause");
}




void ISalida(Seccion laSeccion)
{
 cout<<"El Porcentaje de alumno que esta por encima de promedio es de "<<laSeccion.CalcPorcAP()<<endl;
}


