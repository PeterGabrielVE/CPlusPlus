/*
 * VEmpleado.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */


#include "MEmpresa.h"

MEmpresa::MEmpresa() {
	ct=0;
}

void MEmpresa::SetCt(int c) {
	ct=c;
}

int MEmpresa::GetCt() {
	return ct;
}

void MEmpresa::ProcesarEmpleado(MEmpleado memp) {
	if(memp.GetDiaIni()<15)
			++ct;
}


