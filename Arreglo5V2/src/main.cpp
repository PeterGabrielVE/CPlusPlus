/*
 * main.cpp
 *
 *  Created on: 18/07/2012
 *      Author: Pedro Gabriel Leal
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
cout<<"HASTA LUEGO... =)"<<endl;
	return 0;
}

void IEEstudiante(Estudiante &elEstudiante)
{
	float laNota;
	char elSexo;
	int laEdad;
	cout <<"Datos del Estudiante: \n";
	cout <<"Ingrese la Nota Adquirida:\n ";
	cin.sync();
	cin>>laNota;
	elEstudiante.setNota(laNota);
	cout <<"Ingrese el Sexo M(Masculino)� F(Femenino):\n";
	cin.sync();
	cin>>elSexo;
	elEstudiante.setSexo(elSexo);
	cout <<"Ingrese la Edad:\n";
	cin.sync();
	cin>>laEdad;
	elEstudiante.setEdad(laEdad);

}

void IESeccion(Seccion &laSeccion)
{
	Estudiante elEstudiante;
	cout <<"CARGANDO EL ARREGLO \n\n";
    for(int i=0; i<MAX; i++)
    {
    	cout << "Estudiante # " << i+1 <<endl;
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
cout <<"********************************\n\n";
    listadoCondicional(laSeccion);
cout <<"************************************************************** \n\n";
float promGral= laSeccion.promediarN();
//char tipoSexo= laSeccion.mayorNota();
float feminaMejor= laSeccion.mayorNota().getNota();
int femMejor= laSeccion.mayorNota().getEdad();
cout <<"El promedio General de Notas de la Seccion es          : "<<promGral<<endl;
cout <<"El porcentaje de los Varones Aprobados de la Seccion es: "<<elPorc<<"%"<<endl;
cout <<"La Estudiante Femenino de Mejor Nota es                : "<<feminaMejor<<" de "<<femMejor<<" a�os "<<endl;
cout <<"Promedio de edad de los Masculinos que reprobaron      : "<<laSeccion.promediarMas()<<endl;
system("pause");
}
void listadoGeneral(Seccion laSeccion)
{
Estudiante elEstu;
cout <<" LISTADO GENERAL \n\n";
cout <<"SEXO         EDAD          NOTA \n";
cout <<"-------------------------------  \n\n";
for(int i=0; i<MAX; i++)
{
elEstu = laSeccion.getAEstudiante(i);
cout <<elEstu.getSexo() <<"          "<<elEstu.getEdad() <<"           "<<elEstu.getNota() <<"         "<<endl;
}
}

void listadoCondicional(Seccion laSeccion)
{
Estudiante elEst;
cout <<" LISTADO DE ESTUDIANTES APROBADOS DEL SEXO FEMENINO NOTA >= 10 \n\n";

cout <<"SEXO    NOTA \n";
cout <<"------------ \n\n";
for(int i=0; i<MAX; i++)
{
elEst = laSeccion.getAEstudiante(i);
if (elEst.getSexo()=='F' and elEst.getNota() >= 10)
cout <<elEst.getSexo()<<"     "<< elEst.getNota()<<"     "<<endl;
}
}



