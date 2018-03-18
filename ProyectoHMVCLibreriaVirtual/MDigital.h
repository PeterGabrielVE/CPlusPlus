/*
 * MDigital.h
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MDIGITAL_H_
#define MDIGITAL_H_
#include "MLibro.h"
class MDigital : public MLibro{
protected:
 int cantmegas;
public:
 MDigital();

 void SetCantmegas(int cm);
 int GetCantmegas() ;

 float  CalcRecargoHosting();
 float  CalcCostoNeto();
 float  CalcPvp();
 float  CalcPrecioNeto();
 float  CalcGanancia();

};

#endif /* MDIGITAL_H_ */
