/*
 * Compania.h
 *
 *  Created on: 23/02/2013
 *      Author: Gabriel
 */

#ifndef COMPANIA_H_
#define COMPANIA_H_
#include <string>
#include "Cliente.h"

using namespace std;

class Compania
{
   private:
	int ContCl, ContAInc, ContMedidores, ContGExc, ContClTE;
	float Mayor, Menor, AcumTotP;
   public:
	Compania();
	string DetCond (Cliente elCliente);
	int getContAInc ();
	void CalContCl ();
	int getContCl ();
	void CalContM (Cliente elCliente);
	int getContMedidores ();
	string DetContExc(Cliente elCliente);
	int getContGExc();
	void DetContClTE(Cliente elCliente);
	int getContClTE ();
	void DetMayor (Cliente elCliente);
	float getMayor ();
	void DetMenor (Cliente elCliente);
	float getMenor ();
	void CalAcumTotP (Cliente elCliente);
	float getAcumTotP ();
	float CalPorcAInc();
	float CalcTotal(Cliente elCliente);
	float CalcTotalPagar (Cliente ElCliente);
	float CalcMontoProm ();
};

#endif /* COMPANIA_H_ */
