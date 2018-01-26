/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MEsmeriladora.h"

MEsmeriladora::MEsmeriladora() {
	// TODO Auto-generated constructor stub

}

float MEsmeriladora::CalcMontoDiscos()
{
	return 5 * 30 * GetDiasalguiler();
}

float MEsmeriladora::CalcMontoFinalAlquiler()
{
	return CalcMontoAlquiler() + CalcMontoDiscos();
}

float MEsmeriladora::CalcIva()
{
	return CalcMontoFinalAlquiler() * 0.12;
}



