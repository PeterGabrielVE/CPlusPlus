 /*
  * Principal.cpp
  * Created on: 20/07/2012
  *   Author: Gabriel Leal
  *
 * Ejercicio 18: La nota definitiva de los alumnos de una secci�n de Introducci�n a la Computaci�n
 * se obtiene sumando las 3 notas parciales. Si por cada alumno se tiene su nombre y sus tres notas
 * parciales.
 *
 *  Se le pide que dise�e un modelo que:
 * � Listado que indique Nombre y Nota Definitiva.
 *
 * Al final del Listado Mostrar la siguiente informaci�n:
 * � La mayor nota definitiva y a quien pertenece.
 * � El total de alumnos aplazados.
 * � El Porcentaje de Alumnos aprobados.
 * � El promedio general de la secci�n.
 *
 *
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Alumno.h"
#include "Seccion.h"

using namespace std;

void IEAlumno(Alumno &elAlumno);
void IESeccion(Seccion &laSeccion);
void ISSeccion(Seccion laSeccion);
void listadoNotas(Seccion laSeccion);
int main()
{
Seccion laSeccion;
IESeccion(laSeccion);
ISSeccion(laSeccion);
system("pause");
return 0;
}
void IEAlumno(Alumno & elAlumno)
{
string elN;
float N1, N2, N3;
cout <<"Nombre: ";
cin.sync();
cin >> elN;
cout <<"\nNota 1: ";
cin.sync();
cin >> N1;
cout <<"\nNota 2: ";
cin.sync();
cin >> N2;
cout <<"\nNota 3: ";
cin.sync();
cin >> N3;
elAlumno.setNombre(elN);
elAlumno.setNota1(N1);
elAlumno.setNota2(N2);
elAlumno.setNota3(N3);
}
void IESeccion(Seccion & laSeccion)
{
Alumno elAlumno;
for (int i=1; i<=MAX; i++)
{
cout <<"\nALUMNO "<<i<<":\n";
IEAlumno(elAlumno);
laSeccion.setAAlumno(elAlumno);
}
}
void ISSeccion(Seccion laSeccion)
{
Alumno elMejor;
elMejor = laSeccion.determinarMejor();
listadoNotas(laSeccion);
cout <<"********************************"<<endl;
cout <<"La mayor nota fue:" <<laSeccion.calcularDefinitiva(elMejor)<<" que pertenece a: "<<elMejor.getNombre()<<endl;
cout <<"El Total de alumnos aplazados fue: "<<laSeccion.contarAplazados()<<endl;
cout <<"El Porcentaje de alumnos aprobados fue: "<<laSeccion.calcularPorcAprob()<<" % \n";
cout <<"El Promedio general de la Secci�n fue: "<<laSeccion.calcularPromGral()<<endl;
}
void listadoNotas(Seccion laSeccion)
{
Alumno elA;
cout<<"NOMBRE NOTA DEFINITIVA \n";
cout<<"------ --------------- \n";
for(int i=0; i<laSeccion.getPtr(); i++)
   {
      elA = laSeccion.getAAlumno(i);
     cout<<elA.getNombre()<<" "<<laSeccion.calcularDefinitiva(elA)<<endl;
    }
}


