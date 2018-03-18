/*
 * MTradicional.h
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MTRADICIONAL_H_
#define MTRADICIONAL_H_
#include "MLibro.h"
class MTradicional : public MLibro{
protected:
	string direccion;
	float peso;
	int tipocompra;
public:
	MTradicional();
	void SetDireccion(string dir);
	void SetPeso(float p);
	void SetTipocompra(int tipoc);


	string GetDireccion() ;
	float GetPeso() ;
	int GetTipocompra() ;


	float CalcRecargoPvp();
	float CalcPrecioNeto();
	float CalcMontoFlete();
	float CalcCostoNeto();
    float CalcGanancia();




};

#endif /* MTRADICIONAL_H_ */
