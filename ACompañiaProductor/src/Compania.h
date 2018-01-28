/*
 * Compania.h
 *
 *  Created on: 07/03/2013
 *      Author: Gabriel
 */

#ifndef COMPANIA_H_
#define COMPANIA_H_

#include "Polizas.h"

const int MAX=3;

class Compania
{
private:
	int ptr;
	Polizas APolizas[MAX], MenorV, MayorV;
public:
	Compania();
	int getPtr();
	void setAPolizas(Polizas laPolizas);
	Polizas getAPolizas(int i);
	float CalcTotalPolizas();
	void OrdenarPolizas();
	int BuscarNombre(string elNombre);
	float CalPromedioT();
	float CalPorcentajeV();
	float CalcMontoPagar();
	float CalcPorcPB();
	int CalcCantPolizasV();
	float CalcMontoCobrar();
};

#endif /* COMPANIA_H_ */
