/*
 * MFijo.cpp
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#include "MFijo.h"

MFijo::MFijo() {
	// TODO Auto-generated constructor stub

}

void MFijo::SetMinutoadic(int madic)
{
    minutoadic = madic;
}

int MFijo::GetMinutoadic()
{
    return minutoadic;
}

float MFijo::CalcPagoAdicional()
{
	return 0.3 * minutoadic;

}

float MFijo::CalcMontoTotAPagar()
{
	return GetRentabasica() + CalcPagoAdicional();
}

