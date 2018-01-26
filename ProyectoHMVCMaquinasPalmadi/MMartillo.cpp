/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
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

