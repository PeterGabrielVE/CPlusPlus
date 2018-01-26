/*
 * MTienda.h
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MTIENDA_H_
#define MTIENDA_H_
#include "MJuguetes.h"
class MTienda
{

private:
	float acumgananciajug;

public:
	MTienda();
    void SetAcumgananciajug(float acumgananciajug);
    float GetAcumgananciajug();
    void ProcesarJuguetes(MJuguetes mj);
};

#endif /* MTIENDA_H_ */
