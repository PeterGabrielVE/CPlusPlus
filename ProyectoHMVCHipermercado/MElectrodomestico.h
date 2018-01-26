/*
 * MElectrodomestico.h
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MELECTRODOMESTICO_H_
#define MELECTRODOMESTICO_H_
#include "MArticulo.h"

class MElectrodomestico : public MArticulo{
private:
	string serial;
	int garantia;
	string marca;
	int tipoelectrodom;

public:
	MElectrodomestico();

	void SetGarantia(int g);
	void SetMarca(string m);
	void SetSerial(string s);
	void SetTipoelectrodom(int te);

	string GetMarca() ;
	int GetGarantia() ;
	string GetSerial() ;
	int GetTipoelectrodom() ;

	float CalcPvp();
	float CalcFlete();
	float CalcMontoaPagar();

};

#endif /* MELECTRODOMESTICO_H_ */
