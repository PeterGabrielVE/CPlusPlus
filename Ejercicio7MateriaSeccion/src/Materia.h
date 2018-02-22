/*
 * Materia.h
 *
 *  Created on: 30/01/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MATERIA_H_
#define MATERIA_H_
#include "Seccion.h"
class Materia {
private:
	float AcumProm;
	float MenorProm;
	int MayorAprob;
	int NrSeccionMen;
	int NrSeccionMay;
	int ContS;
public:
	Materia();


	void setAcumProm (Seccion laSeccion);
	float getAcumProm ();
	void setMenorProm (Seccion laSeccion);
	float getMenorProm ();
	int getNrSeccionMen ();
	void setMayorAprob (Seccion laSeccion);
	int getMayorAprob ();
	int getNrSeccionMay ();
	void setContS ();
	int getContS ();
	float CalcPromMat ();

};

#endif /* MATERIA_H_ */
