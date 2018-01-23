/*
 * MCompannia.cpp
 *
 *  Created on: 20/09/2014
 *      Author: Gabriel
 */

#include "MCompannia.h"

MCompannia::MCompannia()
{
	acumMA=0;
	// TODO Auto-generated constructor stub

}

float MCompannia::getAcumMA()
{
	return acumMA;
}



void MCompannia::procesarCabanna(MCabanna mc)
{
	acumMA+=mc.getMontoAlq();
}



float MCompannia::calcCapitalFinal()
{
	float capitalF=0.00;
	const float capitalI=50000.00;
	capitalF= getAcumMA()+ capitalI;
    return capitalF;
}



