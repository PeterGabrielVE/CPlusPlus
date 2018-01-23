/*
 * MCompannia.h
 *
 *  Created on: 20/09/2014
 *      Author: Gabriel
 */

#ifndef MCOMPANNIA_H_
#define MCOMPANNIA_H_
#include "MCabanna.h"

class MCompannia
{
private:
	float acumMA;
public:
	MCompannia();
	float getAcumMA();
	void procesarCabanna(MCabanna mc);
	float calcCapitalFinal();
};

#endif /* MCOMPANNIA_H_ */
