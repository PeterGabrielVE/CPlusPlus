/*
 * MTratamiento.cpp
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#include "MTratamiento.h"


MTratamiento::MTratamiento() {
	// TODO Auto-generated constructor stub

}

//set

void MTratamiento::SetDescripcion(string desc)
{
    descripcion = desc;
}


void MTratamiento::SetStatus(int st)
{
    status = st;
}

//get

string MTratamiento::GetDescripcion()
{
    return descripcion;
}

int MTratamiento::GetStatus()
{
    return status;
}
//metodos propios
