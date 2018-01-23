/*
 * Author: Pedro Leal
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
	/*
	 *El bono de alimentacion NO ES UN DATO DE ENTRADA,
	 *El por lo tanto no se lee, ni es atributo.
	 *Se obtiene a traves de un calculo, acci�n q se realiza en el modulo: float CalcBonoAlim ();
	 *
	 */

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

	float CalcSueldoSemanal();
	float CalcBonoAlim ();
	float CalcPagoExtra();
	float CalcSueldoBase();

	string DetTipoOpEnLetras();

};
#endif /* MOPERARIO_H_ */
