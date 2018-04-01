/*
 * MTraslado.cpp
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
 */

#include "MTraslado.h"


MTraslado::MTraslado() {
	// TODO Auto-generated ructor stub

}

void MTraslado::SetCedula(string c)
{
    ced = c;
}

void MTraslado::SetDia(int d)
{
    dia = d;
}

void MTraslado::SetNrocayo(int nc)
{
    nrocayo = nc;
}

string MTraslado::GetCedula()
{
    return ced;
}

int MTraslado::GetDia()
{
    return dia;
}

int MTraslado::GetNrocayo()
{
    return nrocayo;
}

