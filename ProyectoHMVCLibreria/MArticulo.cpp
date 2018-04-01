/*
 * MArticulo.cpp
 *
 *  Created on: 02/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MArticulo.h"

MArticulo::MArticulo() {}

void MArticulo::SetCodigo(string cod)
{
	codigo=cod;
}

string MArticulo::GetCodigo()
{
	return codigo;
}
void MArticulo::SetPVP(float p)
{
	pvp=p;
}
void MArticulo::SetCosto(float c)
{
	costo=c;
}

float MArticulo::GetPVP()
{
	return pvp;
}
float MArticulo::GetCosto()
{
	return costo;
}
