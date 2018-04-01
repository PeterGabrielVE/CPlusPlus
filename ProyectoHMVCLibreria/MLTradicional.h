/*
 * Author: Pedro Gabriel Leal
 */

#ifndef MLTRADICIONAL_H_
#define MLTRADICIONAL_H_
#include "MLibro.h"
#include <string>
using namespace std;

class MLTradicional : public MLibro
{
private:
	string direccion;
	float peso;
	int tipoenv;
public:
	MLTradicional();
	void SetDireccion(string dr);
	void SetPeso(float pes);
	void SetTipoEnv(int tipe);
	string GetDireccion();
	float GetPeso();
	int GetTipoEnv();
	float Flete();
	float PVP2();
	float PrecioNeto2();
	float Ganancia2();
};

#endif /* MLTRADICIONAL_H_ */
