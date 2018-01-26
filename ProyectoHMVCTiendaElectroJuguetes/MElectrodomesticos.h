/*
 * MElectrodomestico.h
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MELECTRODOMESTICOS_H_
#define MELECTRODOMESTICOS_H_
#include "MArticulo.h"
class MElectrodomesticos : public MArticulo
{

private:
	string color;

public:
	MElectrodomesticos();
    string GetColor();
    void SetColor(string c);
    float CalcularPvp();
};

#endif /* ELECTRODOMESTICOS_H_ */
