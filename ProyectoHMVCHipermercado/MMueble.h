/*
 * MMueble.h
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MMUEBLE_H_
#define MMUEBLE_H_
#include "MArticulo.h"

class MMueble : public MArticulo
{
private:
	int tipomaterial;
public:
	MMueble();

	float CalcPvp();
	float CalcDescto();
	float CalcMontoaPagar();
	int GetTipomaterial() ;
	void SetTipomaterial(int tm);

};

#endif /* MMUEBLE_H_ */
