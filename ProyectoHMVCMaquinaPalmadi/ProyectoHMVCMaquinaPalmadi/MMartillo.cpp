/*
 * MMartillo.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MMartillo.h"

MMartillo::MMartillo() {
	// TODO Auto-generated constructor stub

}

float MMartillo::CalcMontoFinalAlquiler()
{
	return CalcMontoAlquiler();
}

float MMartillo::CalcIva()
{
	return CalcMontoFinalAlquiler() * 0.12;
}

//Ojo
float MMartillo::CalcMontoFinalP()
{
	return CalcMontoFinalAlquiler()+ CalcIva();
}

