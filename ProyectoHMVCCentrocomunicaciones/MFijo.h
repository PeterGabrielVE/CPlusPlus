/*
 * MFijo.h
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef MFIJO_H_
#define MFIJO_H_
#include "MTelefono.h"

class MFijo : public MTelefono{
private:
	int minutoadic;
public:
	MFijo();
	float CalcPagoAdicional();
	float CalcMontoTotAPagar();
    int GetMinutoadic() ;
    void SetMinutoadic(int madic);
};

#endif /* MFIJO_H_ */
