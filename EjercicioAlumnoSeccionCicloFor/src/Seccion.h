/*
 * Seccion.h
 *
 *  Created on: 22/06/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_
#include "Alumno.h"
using namespace std;
class Seccion
{
private:
	int ContAR, ContHA, ContH, ContMB, ContMSP, ContMR, ContHR, ContAA;
	float AcumN, AcumMB, AcumNAR;
public:
	Seccion();
	void InicializarS ();
	void CalContAR (Alumno elAlumno);
	void CalContHA (Alumno elAlumno);
	void CalContH (Alumno elAlumno);
	void CalContMB (Alumno elAlumno);
	void CalContMSP (Alumno elAlumno);
	int ObtenerContMSP ();
	void CalAcumN (Alumno elAlumno);
	void CalAcumMB (Alumno elAlumno);
	float CalPromS ();
	float CalPorcAR ();
	float CalPromMB ();
	float CalPorcHA ();
	void CalContMR (Alumno elAlumno);
	void CalContHR (Alumno elAlumno);
	void CalContAA (Alumno elAlumno);
	int ObtenerContAA ();
	float CalPorcMR ();
	float CalPorcHR ();
	void CalAcumNAR (Alumno elAlumno);
	float CalPromAR ();
	int ObtenerContMB ();
	float ObtenerAcumMB ();
};

#endif /* SECCION_H_ */
