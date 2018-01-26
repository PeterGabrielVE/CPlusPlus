/*
 * Seguro.cpp
 *
 *  Created on: 05/01/2012
 *       Author: Pedro Gabriel Leal
 */

#include "MTipoSeguro.h"

MTipoSeguro :: MTipoSeguro() {}

void MTipoSeguro :: SetDescripcion(string d)
{
	descripcion = d;
}
void MTipoSeguro :: SetPorcComi(float porc)
{
	porc_comi = porc;
}
string MTipoSeguro :: GetDescripcion()
{
	return descripcion;
}
float MTipoSeguro :: GetPorcComi()
{
	return porc_comi;
}
