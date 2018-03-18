/*
 * Principal.cpp
 *
 *  Created on: 22/06/2012
 *      Author: Pedro Gabriel Leal

	Calcular: a)Porcentajes de mujeres y hombres reprobados.
          	  b)Cantidad de alumnos que sacaron A.
          	  c)Promedio de Notas de Alumnos Reprobados.
*/

#include "Seccion.h"
#include "Alumno.h"
#include <stdlib.h>
using namespace std;

void IEAlumno (Alumno &elAlumno);
void ISSeccion (Seccion laSeccion);

int main ()
{
	Alumno elAlumno;
	Seccion laSeccion;
	int i;

	laSeccion.InicializarS();
	for (i=1; i<=4; i=i+1)
	{
		IEAlumno (elAlumno);
		laSeccion.CalAcumMB(elAlumno);
		laSeccion.CalAcumN(elAlumno);
		laSeccion.CalContAR(elAlumno);
		laSeccion.CalContH(elAlumno);
		laSeccion.CalContHA(elAlumno);
		laSeccion.CalContMB(elAlumno);
		laSeccion.CalContMSP(elAlumno);
		laSeccion.CalContAA(elAlumno);
		laSeccion.CalContHR(elAlumno);
		laSeccion.CalContMR(elAlumno);
		laSeccion.CalAcumNAR(elAlumno);

	}
	ISSeccion (laSeccion);
	return 0;
}
void IEAlumno (Alumno &elAlumno)
{
	int laCed;
	char elSexo;
	float laNota;
	cout<<"**//INGRESE LOS DATOS DEL ALUMNO\\**"<<endl;
	cout<<"Ingrese la Cedula del Alumno (Sin V, E y .):"<<endl;
	cin>>laCed;
	elAlumno.AsignarCedula(laCed);
	cout<<"Ingrese el Sexo del Alumno (<F>emenino o <M>asculino):"<<endl;
	cin>>elSexo;
	elAlumno.AsignarSexo(elSexo);
	cout<<"Ingrese la Nota del Alumno (Escala del 1 al 20 ptos):"<<endl;
	cin>>laNota;
	elAlumno.AsignarNota(laNota);
}
void ISSeccion (Seccion laSeccion)
{
	cout<<"El promedio de la Seccion es:" <<laSeccion.CalPromS()<<"ptos"<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"La Cantidad de Alumnas que estan sobre el Promedio es:"<<laSeccion.ObtenerContMSP()<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"El Porcentaje de Alumnos reprobados es:"<<laSeccion.CalPorcAR()<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"El Promedio de Mujeres que sacaron B es:"<<laSeccion.CalPromMB()<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"El Porcentaje de Hombres Aprobados es:"<<laSeccion.CalPorcHA()<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"El Porcentaje de Mujeres Reprobadas es:"<<laSeccion.CalPorcMR()<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"El Porcentaje de Hombres Reprobados es:"<<laSeccion.CalPorcHR()<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"La Cantidad de Alumnos que sacaron A es:"<<laSeccion.ObtenerContAA()<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"El Promedio de Notas de Alumnos Reprobados es:"<<laSeccion.CalPromAR()<<"ptos"<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"**//Gracias, Ya ha Procesados todos los Alumno//**"<<endl;
	cout<<"*****************************************************"<<endl;

    system ("pause");
}

