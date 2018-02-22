/*
 * Seccion.cpp
 *
 *  Created on: 24/01/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Seccion.h"

Seccion::Seccion() {
	// TODO Auto-generated constructor stub


	cont_hombres = 0;				   /* inicializando contador de hombres             */
	cont_mujeres = 0;			      /* inicializando contador de mujeres             */
	cont_alumRepro = 0;			     /* inicializando contador de alumnos reprobados  */
	acum_MujeresconB = 0;		    /* inicializando acumulador de mujeres con B     */
	acum_nota = 0;				   /* inicializando acumulador de nota	   		    */
	cont_hombresAprobados = 0;    /* inicializando contador de hombres aprobados   */
	cont_MujeresconB = 0;        /* inicializando contador de mujeres con B 	  */
	cont_MujeresAprobadas = 0;  /* inicializando contador de mujeres aprobadas   */
	cont_MujeresSobreelPromedio = 0; /*inicializando contador de mujeres sobre el promedio */
	ptr = 0;
}


void Seccion::ContarMujeresSobreelPromedio(Alumno elAlumno)
{
	if(elAlumno.getSexo()== 'F' and elAlumno.getNota() >  calcPromediodeseccion(elAlumno))
			cont_MujeresSobreelPromedio = cont_MujeresSobreelPromedio + 1;
}





void Seccion::ContarMujeresConB(Alumno elAlumno) /* procedimiento para contar mujeres con B */
{
	if(elAlumno.getSexo() == 'F' and elAlumno.getNota() >15 and elAlumno.getNota() <19)
		cont_MujeresconB = cont_MujeresconB + 1;



}

int Seccion::getCont_MujeresconB() /* retornando nuestro contador de nuestro procedimiento de contar mujeres con B */
{
	return cont_MujeresconB;
}





void Seccion::contarhombres(Alumno elAlumno) /* procedimiento para contar hombres */
{
	if(elAlumno.getSexo() == 'M')
	cont_hombres = cont_hombres + 1;
}



int Seccion::getCont_hombres() /* retornando nuestro contador de nuestro procedimiento de contar hombres */
{
	return cont_hombres;
}







void Seccion::contarmujeres(Alumno elAlumno) /* procedimiento para contar mujeres en general */
{

	if(elAlumno.getSexo() == 'F' and elAlumno.getNota() >= 10)
	cont_mujeres = cont_mujeres + 1;

}




int Seccion::getCont_mujeres() /* retornando contador de nuestro procedimiento de contar mujeres */
{
	return cont_mujeres;
}








void Seccion::contaralumnosrepobrados(Alumno elAlumno) /* procedimiento para contar alumnos reprobados en la seccion */
{
	if(elAlumno.getNota() < 10)
	cont_alumRepro = cont_alumRepro + 1;
}



int Seccion::getCont_alumRepro() /* retornando nuestro contador de alumnos reprobados de nuestro procedimiento anterior */
{
	return cont_alumRepro;
}






void Seccion::acumularmujeresconB(Alumno elAlumno) /* procedimiento para acumular mujere con B */
{

	if(elAlumno.getSexo() == 'F' and elAlumno.getNota() > 15 and elAlumno.getNota() < 19)
	acum_MujeresconB = acum_MujeresconB + elAlumno.getNota();


	}




float Seccion::getAcum_MujeresconB() /* retornando a nuestro acumulador de mujeres con B de nuestro procedimiento anterior */
{
	return acum_MujeresconB;
}






void Seccion::contarhombresaprobados(Alumno elAlumno) /* procedimiento para contar a hombres aprobados en la seccion */
{
	if(elAlumno.getNota() >= 10 and elAlumno.getSexo() == 'M')
	cont_hombresAprobados = cont_hombresAprobados + 1;
}



float Seccion::getCont_hombresAprobados() /* retornando nuestro contador de hombres aprobados de nuestro procedimiento de contar hombres aprobados */
{
	return cont_hombresAprobados;
}



void Seccion::acumularnotas(Alumno elAlumno) /* procedimiento para acumular notas en general de la seccion */
{
	acum_nota = acum_nota + elAlumno.getNota();
}





float Seccion::getAcum_nota() /* retornando nuestro acumulador de notas de la seccion reflejada en el procedimiento anterior */
{
	return acum_nota;
}








float Seccion::calcPromediodeseccion(Alumno elAlumno) /* calculando promedio de la seccion dando uso a nuestro acumulador de nota y creando variable local dentro del procedimiento */
{
	{
		float acumNotas = 0;
		for(int i = 0; i < ptr; i++)
		{
			acumNotas = acumNotas + A_CantMujeres[i].getNota(); // Cargando al arreglo solamente a mujeres de la seccion haciendo uso de [A_CantMujeres]
		}
		return acumNotas/ptr;
	}

}





int Seccion::calcAlumnasmujeresAprobadas(Alumno elAlumno) /* calculando alumnas aprobadas en la seccion dando uso a nuestro contador de mujeres y creando variable local dentro de nuestro procedimiento */
{
	int Mujeressobreelpromedio;
	Mujeressobreelpromedio = getCont_mujeres();
	return Mujeressobreelpromedio;
}





float Seccion::calcPorcentajedealumnosreprobados(Alumno elAlumno) /* calculando porcentaje de alumnos reprobados dentro de la seccion */
{
	float elPorc_AlumRepro;
	elPorc_AlumRepro = (getCont_alumRepro() * 100) / 5;
	return elPorc_AlumRepro;
}





float Seccion::calcPromediomujeresconB(Alumno elAlumno) /* calculando promedio de mujeres con B */
{

	float elProm_MujconB;
	elProm_MujconB = getAcum_MujeresconB() / getCont_MujeresconB();
	return elProm_MujconB;

	}






float Seccion::calcPorcentajevaronesaprobados(Alumno elAlumno) /* calculando porcentaje de varones aprobados */
{
	float elPorc_VaronesA;
	elPorc_VaronesA = (getCont_hombresAprobados() *100) / 5;
	return elPorc_VaronesA;
}



float Seccion::calcMujeresSobreelPromedio(Alumno elAlumno)
{
	float prom = calcPromediodeseccion(elAlumno);
	int cant = 0;

	for(int i = 0; i < ptr; i++)

		if(A_CantMujeres[i].getNota() > prom) // Cargando datos de las mujeres de la seccion haciendo uso de [A_CantMujeres]
			cant++;

	return cant;
}


// ARREGLOS [Asignando y obteniendo Puntero del arreglo y una Cantidad de Mujeres
//para poder sacar asi la cantidad de mujeres sobre el promedio de la seccion declarando una variable para la cantidad de mujeres


void Seccion::setPtr(int elPtr) // Asigna un valor al puntero ptr
{
	ptr = elPtr;
}



int Seccion::getPtr() //leyendo el puntero ptr
{
	return ptr;
}



bool Seccion::setMujeres(Alumno elAlumno) //metodo para determinar la cantidad de mujeres que estan en la seccion por medio del arreglo haciendo uso del puntero ptr
{
	if(ptr < MAX)
	{
		A_CantMujeres [ptr] = elAlumno;
		ptr++;
		return true;
	}
	else
		return false;
}



Alumno Seccion::getMujeres(int i)
{
	return A_CantMujeres[i];
}



// FIN DE ARREGLOS


