/*
 * MCayo.cpp
 *
 *  Created on: 05/02/2014
 *      Author:Gabriel
 */

#include "MCayo.h"

MCayo::MCayo() {
	// TODO Auto-generated constructor stub
	acumgingresos=0;
}

void MCayo::SetAcumgingresos(float acumgingr) {
	acumgingresos = acumgingr;
}


float MCayo::GetAcumgingresos()  {
	return acumgingresos;
}


void MCayo::Actualizar() {
	acumgingresos += GetPvp();

}


