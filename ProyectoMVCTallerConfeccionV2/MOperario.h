/*
 * Author: Gabriel Leal
 *
 */

#ifndef MOPERARIO_H_
#define MOPERARIO_H_

#include <string>
using namespace std;

class MOperario
{
private:
	string cedula;
	int tipo;
	int horastrab;
	float  precioxhora;


public:
	MOperario();
	void SetCedula (string);
	void SetTipo (int);
	void SetHorasTrab (int);
	void SetPrecioxHora (float);

	string GetCedula ();
	int GetTipo ();
	int GetHorasTrab ();
	float GetPrecioxHora();

	float CalcSueldoBase();
	float CalcPagoExtra();
	float CalcSueldoSemanal();
};
#endif /* MOPERARIO_H_ */
