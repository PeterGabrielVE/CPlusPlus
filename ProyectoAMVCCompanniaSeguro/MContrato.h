/*
 * MContrato.h
 *
 *  Created on: 05/01/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MCONTRATO_H_
#define MCONTRATO_H_
#include <string>
using namespace std;
class MContrato{
private:
	string cedula;
	int tipo_seguro;
	float prima_contrato;
public:
	MContrato();
	void SetCedula(string c);
	void SetTipoSeguro(int s);
	void SetPrimaContarto(float p);
	string GetCedula();
	int GetTipoSeguro();
	float GetPrimaContrato();
};
#endif /* MCONTRATO_H_ */
