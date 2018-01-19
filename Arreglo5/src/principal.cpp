/*
 * principal.cpp
 *
 *  Created on: 20/07/2012
 *      Author: Pedro Leal
 *   De 100 estudiantes de una Sección se conoce su nota, el sexo y
 *   la edad. Escriba un programa que:
	a. Muestre los estudiantes del sexo masculino cuya nota sea mayor o igual a la nota
	promedio del curso.
	b. Muestre el Porcentaje de estudiantes del sexo femenino que integran la sección.
 */

#include <stdlib.h>
#include <iostream>
#include "Seccion.h"
#include "Estudiante.h"
using namespace std;


void IEEstudiante(Estudiante &elEstudiante);
void IESeccion(Seccion &laSeccion);
void ISSeccion(Seccion laSeccion);
void listadoGeneral(Seccion laSeccion);
void listadoCondicional(Seccion laSeccion);

int main()
{
	Seccion laSeccion;
	IESeccion(laSeccion);
	ISSeccion(laSeccion);

	return 0;
}

void IEEstudiante(Estudiante &elEstudiante)
{
	float laNota;
	char elSexo;
	int laEdad;
	cout <<"Datos del Estudiante: \n";
	cout <<"Ingrese la Nota Del Estudiante:\n ";
	cin.sync();
	cin>>laNota;
	elEstudiante.setNota(laNota);
	cout <<"Sexo M(Masculino)� F(Femenino): \n";
	cin.sync();
	cin>>elSexo;
	elEstudiante.setSexo(elSexo);
	cout <<"Ingrese la Edad del Estudiante: \n";
	cin.sync();
	cin>>laEdad;
	elEstudiante.setEdad(laEdad);

}

void IESeccion(Seccion &laSeccion)
{
	Estudiante elEstudiante;
    for(int i=0; i<MAX; i++)
    {
    	IEEstudiante(elEstudiante);
    	laSeccion.setAEstudiante(elEstudiante);
    	cout <<endl;
    }
}

void ISSeccion(Seccion laSeccion)
{
	float elPorc=laSeccion.calcularPorc();
cout <<"DATOS DE LA SECCION \n\n";
	listadoGeneral(laSeccion);
cout <<"**************************\n\n";
    listadoCondicional(laSeccion);
cout <<"******************************************** \n\n";
float promGral= laSeccion.promGral();
cout <<"El promedio General de Notas de la Seccion es:..."<<promGral<<endl;
cout <<"El porcentaje de las Mujeres de la Seccion es:..."<<elPorc<<"%"<<endl;
system("pause");
}
void listadoGeneral(Seccion laSeccion)
{
Estudiante elEstu;
cout <<" LISTADO GENERAL \n\n";
cout <<"NOTA         SEXO          EDAD \n";
cout <<"-------------------------------  \n\n";
for(int i=0; i<MAX; i++)
{
elEstu = laSeccion.getAEstudiante(i);
cout <<elEstu.getNota() <<"         "<<elEstu.getSexo() <<"         "<<elEstu.getEdad() <<"         "<<endl;
}
}

void listadoCondicional(Seccion laSeccion)
{
Estudiante elEst;
cout <<" LISTADO CONDICIONADO - ESTUDIANTES MASCULINOS CON NOTA MAYOR O IGUAL PROMEDIO\n\n";

cout <<"SEXO    NOTA \n";
cout <<"------------ \n\n";
for(int i=0; i<MAX; i++)
{
elEst = laSeccion.getAEstudiante(i);
if (elEst.getSexo()=='M' and elEst.getNota() >= laSeccion.promGral())
cout <<elEst.getSexo()<<"    "<< elEst.getNota()<<"    "<<endl;
}
}



