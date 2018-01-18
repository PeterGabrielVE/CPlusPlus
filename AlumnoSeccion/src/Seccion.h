/*
 * Seccion.h
 *
 *  Created on: 25/05/2012
 *      Author: Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_
#include "Alumno.h"

class Seccion
{
private:
	int acumNotas;
	int contAlumnas;
	int contReprobados;
	int acumNotasMB;
	int contMB;
	int contVA;
	int contAlumnaR;
	int acumAR;
public:
	Seccion();
	void asignarAcumNotas(int laNota);
	int obtenerAcumNotas();
	void asignarContAlumnas(int laAlum);
	int obtenerContAlumnas();
	void asignarContReprobados(int elRepro);
	int obtenerContReprobados();
	void asignarAcumNotasMB(int laNotMB);
	int obtenerAcumNotasMB();
	void asignarContMB(int elMb);
	int obtenerContMB();
	void asignarContVA(int elVa);
	int obtenerContVA();
	void asignarContAlumnaR(int elContA);
	int obtenerContAlumnasR();
	void asignarAcumAR(int elAcumAR);
	int obtenerAcumAR();
	void acumularNotas(Alumno elAlumno);
	float promediarNotas();
	void contarAlumnas(Alumno elAlumno);
	void contarReprobados(Alumno elAlumno);
	float calcularPorcReprobados();
	void acumularNotasMB(Alumno elAlumno);
	void contarMB(Alumno elAlumno);
	float promediarMB();
	void contarVA(Alumno elAlumno);
	float calcularPorcVA();
	void contarAlumnasR(Alumno elAlumno);
	void AcumularAR(Alumno elAlumno);
	float promediarAlumnaRe ();
};

#endif /* SECCION_H_ */
