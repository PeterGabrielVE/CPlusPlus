/*De 50 estudiantes de una Sección se conoce la cedula, el sexo y la edad. Escriba un programa que lea los datos, los cargue en un arreglo y muestre por pantalla:
a. Un listado de todos los estudiantess mayores de edad.
b. Cantidad de Estudiantes cuyas edades sean mayor al promedio de edad de la Sección.
c. El alumno Masculino de Mayor Edad.
d. Porcentaje de estudiantes del sexo Femenino.
 *
 * Pincipal.cpp
 *
 *  Created on: 16/07/2012
 *      Author: Pedro Leal
 */

#include <stdlib.h>
#include <iostream>
#include "Estudiante.h"
#include "Seccion.h"

using namespace std;

void IEEstudiante (Estudiante &elE);
void IESeccion (Seccion &laSec);
void ISSeccion (Seccion laSec);
void listadoMayores (Seccion laSec);
void listadoVaronesMP (Seccion laSec);

int main ()
{
	Seccion laSec;
	IESeccion (laSec);
	ISSeccion (laSec);
	return 0;
}

void IEEstudiante (Estudiante &elE)
{
	string laCI;
	int laEd;
	char elSx;
	cout << "Datos de Entrada del Estudiante:	\n\n";
	cout << "Ingrese la cedula del Estudiante:	\n";
	cin.sync();
	cin >> laCI;
	elE.setCedula(laCI);
	cout << "Ingrese la edad del Estudiante:	\n";
	cin.sync();
	cin >> laEd;
	elE.setEdad(laEd);
	cout << "Ingrese el Sexo del Estudiante F(femenino)/ M(masculino) :	\n";
	cin.sync();
	cin >> elSx;
	elE.setSexo(elSx);
}

void IESeccion (Seccion &laSec)
{
	Estudiante elE;
	cout << "DATOS DE LA SECCION... \n\n";

	for (int i = 0; i<MAX; i++)
	{
		IEEstudiante (elE);
		laSec.setAEstudiante(elE);
	}
}

void ISSeccion (Seccion laSec)
{
	Estudiante elE;
	cout << "Listado de Varones Mayores de Edad " << endl;
	listadoMayores (laSec);
	cout <<"\n\n";
	cout <<"Listado de Varones Mayor al Promedio " << endl;
	listadoVaronesMP (laSec);
	cout <<"\n\n";
	cout << "La cantidad de estudiante que Sobrepaso el promedio de edad es:" <<laSec.contarEMP()<<endl;
	elE = laSec.determinarMayor();
	cout << "El alumno Masculino de mayor edad es el Portador de la cedula :" << elE.getCedula () << " Y su edad es " <<elE.getEdad() <<endl;
	cout << "El Porcentaje de Alumnas (mujer) es:" << laSec.calPorcSF() <<'%'<<endl;
	cout << "La Cantidad de alumnos mayores de edad es: " <<laSec.contAM() <<endl;
	if (elE.getSexo() == 'F')
	elE= laSec.determinarMenor();
	cout << "La Alumna que posee la menor edad es portadore de la cedula: " << elE.getCedula() << " Y su edad es  " <<elE.getEdad() <<endl;
	system ("pause");
}

void listadoMayores (Seccion laSec)
{
	Estudiante elE;

	cout << "CEDULA		EDAD		SEXO \n";
	for (int i = 0; i<MAX; i++)
	{
		elE = laSec.getAEstudiante(i);
		if (elE.getEdad() > 18)
			cout << elE.getCedula() << "		"	<<elE.getEdad() << "		"	<<elE.getSexo()<< "			"<< endl;
	}
}
void listadoVaronesMP (Seccion laSec)
{
	Estudiante elE;

	cout << "CEDULA		EDAD		SEXO \n";
		for (int i = 0; i<MAX; i++)
		{
			elE = laSec.getAEstudiante(i);
			if (elE.getEdad() > laSec.promediarEdad() and elE.getSexo() == 'M')
				cout << elE.getCedula() << "		"	<<elE.getEdad() << "		"	<<elE.getSexo()<< "			"<< endl;
		}
}
