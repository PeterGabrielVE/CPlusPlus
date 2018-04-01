/*
 * MEsmeriladora.cpp
 *
 *  Created on: 22/05/2012
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

//OJO x si las mozcas
float MEsmeriladora::CalcMontoFinalE()
{
	return CalcMontoFinalAlquiler()+ CalcIva();
}

