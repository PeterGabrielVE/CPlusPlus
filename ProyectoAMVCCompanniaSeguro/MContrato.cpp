/*
 * MContrato.cpp
 *
 *  Created on: 05/01/2012
 *       Author: Pedro Gabriel Leal
 */

#include "MContrato.h"

MContrato :: MContrato(){}

void MContrato :: SetCedula(string c)
{
	cedula = c;
}
void MContrato :: SetTipoSeguro(int s)
{
	tipo_seguro = s;
}
void MContrato :: SetPrimaContarto(float p)
{
	prima_contrato = p;
}
string MContrato :: GetCedula()
{
	return cedula;
}
int MContrato :: GetTipoSeguro()
{
	return tipo_seguro;
}
float MContrato :: GetPrimaContrato()
{
	return 	prima_contrato;
}
