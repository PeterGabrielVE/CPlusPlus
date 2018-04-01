/*
 * Author: Pedro Gabriel Leal
 */
#include "MLTradicional.h"

MLTradicional::MLTradicional() {}

void MLTradicional::SetDireccion(string dr)
{
	direccion=dr;
}
void MLTradicional::SetPeso(float pes)
{
	peso=pes;
}
void MLTradicional::SetTipoEnv(int tipe)
{
	tipoenv=tipe;
}
string MLTradicional::GetDireccion()
{
	return direccion;
}

float MLTradicional::GetPeso()
{
	return peso;
}

int MLTradicional::GetTipoEnv()
{
	return tipoenv;
}
float MLTradicional::Flete()
{
	if(peso<=1)
		return 250;
	else
		if(peso>1 and peso<3)
			return 500;
		else
			return 0;
}
float MLTradicional::PVP2()
{
	if(tipoenv==2)
		return pvp*0.02;
	else
		return 0;
}

float MLTradicional::PrecioNeto2()
{
	return pvp+Flete()+PVP2();
}

float MLTradicional::Ganancia2()
{
	return PrecioNeto2()-Flete()-costo;
}
