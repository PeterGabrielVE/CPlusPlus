
/*
 * Principal.cpp
 *
 *  Created on: 24/01/2013
 *      Author: Pedro Gabriel Leal
 *
 *      Se tiene 40 alumnos de una seccion de los cuales por
 *      cada uno de ellos se conoce su cedula, sexo y nota sobre
 *      20 puntos. De acuerdo a la siguiente tabla:
 *
 *      A: 19 y 20     B: 16,17,18      C: 13,14,15        D: 10,11,12       E: 1 hasta 9
 *
 *
 *      Calcular y mostrar:
 *
 *      a)	Promedio de la Secci�n.
 *      b)	Cantidad de alumnas (sexo femenino) que est�n sobre el promedio (REQUERIMIENTO CON ARREGLOS)
 *      c)	Porcentaje de alumnos (ambos sexos) reprobados.
 *      d)	Promedio de notas de las mujeres que sacaron B.
 *      e)	Porcentaje de varones Aprobados.
 *
 *      ****NUEVO REQUERIMIENTO****
 *      cantidad de alumnas (sexo femenino) que aprobaron en la seccion
 *
 *
 */

#include <iostream>         /* Inclusion de libreria */
#include <stdlib.h>		   /* Inclusion de libreria */
#include <string.h>		  /* Inclusion de libreria */
#include "Alumno.h"		 /* Inclusion de Clase    */
#include "Seccion.h"	/* Inclusion de Clase    */

using namespace std;

void IEAlumno(Alumno &elAlumno);
void IESeccion(Seccion &laSeccion);
void ISalida(Seccion laSeccion,Alumno elAlumno);

int main()
{


	Alumno elAlumno;
		Seccion laSeccion;
		IESeccion(laSeccion);
		ISalida(laSeccion,elAlumno);
		system ("pause");
		cout << "Fin del ejercicio..." <<endl;
		return 0;
}






void IEAlumno(Alumno &elAlumno)
{
	string laCedula;
	char elSexo;
	float laNota;

	cout <<"Ingrese la cedula del alumno:" << endl;
	cin >> laCedula;
	elAlumno.setCedula(laCedula);

	cout <<"Ingrese el Sexo M(Masculino) F(Femenino):" << endl;
	cin >> elSexo;
	elAlumno.setSexo(elSexo);

	cout <<"Ingrese la nota del alumno:" << endl;
	cin >> laNota;
	elAlumno.setNota(laNota);
}


void IESeccion(Seccion &laSeccion)
{
	Alumno elAlumno;
	for(int i = 0; i < MAX; i++)
	{
		cout << "Alumno # " << i+1 << endl;

		IEAlumno(elAlumno);
		laSeccion.setMujeres(elAlumno);
		laSeccion.contaralumnosrepobrados(elAlumno);
		laSeccion.contarhombres(elAlumno);
		laSeccion.contarhombresaprobados(elAlumno);
		laSeccion.contarmujeres(elAlumno);
		laSeccion.acumularmujeresconB(elAlumno);
		laSeccion.ContarMujeresConB(elAlumno);
	}



}

void ISalida(Seccion laSeccion,Alumno elAlumno)
{
	cout << endl <<"El promedio de la seccion es de: " <<laSeccion.calcPromediodeseccion(elAlumno) << "ptos / 20pts" << endl;
	cout << endl <<"La cantidad de alumnas que han aprobado en la seccion es: " << laSeccion.calcAlumnasmujeresAprobadas(elAlumno) << endl;
	cout << endl <<"El porcentaje de alumnas y alumnos reprobados de la seccion es de: " <<laSeccion.calcPorcentajedealumnosreprobados(elAlumno) << " % " << endl;

	if (laSeccion.calcMujeresSobreelPromedio(elAlumno) > 0)  /*Condicion para que cuando no haya mujeres sobre el promedio, el resultado no se muestre en pantalla */
    cout << endl <<"Las Alumnas que estan sobre el promedio es de: " << laSeccion.calcMujeresSobreelPromedio(elAlumno)<< endl;

	if (laSeccion.calcPromediomujeresconB(elAlumno) > 0) /*Condicion para que cuando no haya mujeres con promedio B, el resultado no se muestre en pantalla */

		cout << endl <<"El promedio de las alumnas que obtuvieron B en la seccion es: " <<laSeccion.calcPromediomujeresconB(elAlumno)<< "ptos" << endl;

	if (laSeccion.calcPorcentajevaronesaprobados(elAlumno) > 0) /*Condicion para que cuando no haya varones aprobados, el resultado no se muestre en pantalla */

	cout << endl <<"El porcentaje de varones aprobados en la seccion es: " <<laSeccion.calcPorcentajevaronesaprobados(elAlumno) << " % " << endl;


	system ("pause");
}










