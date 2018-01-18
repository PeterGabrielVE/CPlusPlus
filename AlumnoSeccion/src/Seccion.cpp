/*
 * Seccion.cpp
 *
 *  Created on: 25/05/2012
 *      Author: Gabriel Leal
 */

#include "Seccion.h"
#include "Alumno.h"



Seccion::Seccion() 
{

	acumNotas = 0;				// acumulador de notas;
	contAlumnas = 0;			// contador de alumnos;
	contReprobados = 0;			// contador de reprobados;
	acumNotasMB = 0;			// acumulador de mujeres con nota B;
	contMB = 0;					// contador de mujeres con nota B;
	contVA = 0;					// contador de varones aprobados;
	contAlumnaR = 0;            //contador de alumnas reprobadas;
	acumAR = 0;                 //acumulador de alumnas reprobadas;
}

void Seccion::asignarAcumNotas(int laNota)
{
	acumNotas = laNota;
}



int Seccion::obtenerAcumNotas()
{
	return acumNotas;
}



void Seccion::asignarContAlumnas(int laAlum)
{
	contAlumnas = laAlum;
}



int Seccion::obtenerContAlumnas()
{
	return contAlumnas;
}



void Seccion::asignarContReprobados(int elRepro)
{
	contReprobados = elRepro;
}



int Seccion::obtenerContReprobados()
{
	return contReprobados;
}



void Seccion::asignarAcumNotasMB(int laNotMB)
{
	acumNotasMB = laNotMB;
}



int Seccion::obtenerAcumNotasMB()
{
	return acumNotasMB;
}



void Seccion::asignarContMB(int elMb)
{
	contMB = elMb;
}



int Seccion::obtenerContMB()
{
	return contMB;
}



void Seccion::asignarContVA(int elVa)
{
	contVA = elVa;
}



int Seccion::obtenerContVA()
{
	return contVA;
}

void Seccion::asignarContAlumnaR(int elContA)
{
	contAlumnaR = elContA;
}

int Seccion::obtenerContAlumnasR()
{
	return contAlumnaR;
}

void Seccion::asignarAcumAR(int elAcumAR)
{
	acumAR = elAcumAR;
}

int Seccion::obtenerAcumAR()
{
	return acumAR;
}

void Seccion::acumularNotas(Alumno elAlumno)
{
	acumNotas = acumNotas + elAlumno.obtenerNota();
}



float Seccion::promediarNotas()
{
	float elPro;
	elPro = acumNotas / 4;
	return elPro;
}



void Seccion::contarAlumnas(Alumno elAlumno)
{
	if (elAlumno.obtenerSexo() == 'F')
		contAlumnas = contAlumnas + 1;
}



void Seccion::contarReprobados(Alumno elAlumno)
{
	if (elAlumno.obtenerNota() < 10)
		contReprobados = contReprobados + 1;
}


// Contar varones reprobados

void Seccion::contarVA(Alumno elAlumno)
{
	if (elAlumno.obtenerSexo() == 'M' and elAlumno.obtenerNota() > 10)
		contVA = contVA + 1;
}

float Seccion::calcularPorcReprobados()
{
	float elPorcR;
	elPorcR=((contReprobados*100)/4);
	return elPorcR;
}



void Seccion::acumularNotasMB(Alumno elAlumno)
{
	if (elAlumno.obtenerSexo() == 'F' and elAlumno.obtenerNota() >= 16 and elAlumno.obtenerNota() <= 18)
		acumNotasMB = acumNotasMB + elAlumno.obtenerNota();
}



void Seccion::contarMB(Alumno elAlumno)
{
	if (elAlumno.obtenerSexo() == 'F' and elAlumno.obtenerNota() >= 16 and elAlumno.obtenerNota() <= 18)
		contMB = contMB + 1;
}



float Seccion::promediarMB()
{
	float elProMb;
	if (contMB !=0)
	elProMb = acumNotasMB / contMB;
	else
		elProMb = 0;
	return elProMb;
}


//Porcentaje de varones aprobados

float Seccion::calcularPorcVA()
{
	float elPorcVa;

	if(contAlumnas != 0){

		elPorcVa=(contVA*100)/(4-contAlumnas);
	}

	else{
		elPorcVa = 0;
	}
	return elPorcVa;
}


void Seccion::AcumularAR(Alumno elAlumno)
{
	if (elAlumno.obtenerSexo() == 'F' and elAlumno.obtenerNota()< 10)
		acumAR = acumAR + elAlumno.obtenerNota();
}


void Seccion::contarAlumnasR(Alumno elAlumno)
{
	if (elAlumno.obtenerSexo() == 'F' and elAlumno.obtenerNota() < 10)
		contAlumnaR = contAlumnaR + 1;
}

float Seccion::promediarAlumnaRe()
{
	float elProARe;
	if (contAlumnaR != 0)
		elProARe = acumAR / contAlumnaR;
	else
		elProARe = 0;
	return elProARe;
}



