/*
 * Productor.h
 *
 *  Created on: 04/03/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef PRODUCTOR_H_
#define PRODUCTOR_H_
#include <string>
using namespace std;

class Productor {
private:
	string Cedula;
	float MontoHCM, MontoVida, MontoCobrar;

public:
	Productor();

	void setCedula(string ced);
	string getCedula();

	void setMontoHCM(float MHcm);
	float getMontoHCM();

	void setMontoVida(float MVid);
	float getMontoVida();

	void setMontoCobrar(float MCobrarAux);
	float getMontoCobrar ();
};

#endif /* PRODUCTOR_H_ */
