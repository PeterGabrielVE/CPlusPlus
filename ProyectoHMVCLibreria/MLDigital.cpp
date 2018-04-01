/*
 * Author: Pedro Gabriel Leal
 */
#include "MLDigital.h"

MLDigital::MLDigital() {}

void MLDigital::SetMBytes(float mb)
{
	mbytes=mb;
}
float MLDigital::GetMBytes()
{
	return mbytes;
}
float MLDigital::Hosting()
{
	if(mbytes<=1500)
		return 100;
	else
		if(mbytes>1500 and mbytes<=4000)
			return 300;
		else
			return 0;
}

float MLDigital::CostoNeto1()
{
	return costo + Hosting();
}

float MLDigital::Ganancia1()
{
	return pvp-CostoNeto1();
}

