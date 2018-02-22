/*
 * Seccion.h
 *
 *  Created on: 30/01/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_

class Seccion {
private:
	int CantAlum;
	int EstAplazados;
	float NotaSec;
public:
	Seccion();
	void setCantAlum (int CantAl);
	int getCantAlum ();
	void setEstAplazados (int EstApl);
	int getEstAplazados ();
	void setNotaSec (float NotaS);
	float getNotaSec ();
	int CalcEstAprob ();
	float CalcPromSec ();
};

#endif /* SECCION_H_ */
