/*
 * Corredor.cpp
 *
 *  Created on: 05/01/2012
 *       Author: Pedro Gabriel Leal
 */

#include "MCorredor.h"
#include <iostream>
using namespace std;

MCorredor :: MCorredor(){}

void MCorredor :: IncluirCantTipoSeguro(int cant)
{
	cant_tipo_seguros.push_back(cant);
}
void MCorredor :: SetComisionMensual(float cm)
{
	comision_mensual = cm;
}
void MCorredor :: SetCantUnTipoSeguro(int i, int cant)
{
	cant_tipo_seguros[i] = cant;
}
void MCorredor :: SetCantTipoSeguros(vector<int> cantipseg)
{
	cant_tipo_seguros = cantipseg;
}
float MCorredor :: GetComsionMensual()
{
	return comision_mensual;
}
int MCorredor :: GetCantUnTipoSeguro(int i)
{
	return cant_tipo_seguros[i];
}
vector<int> MCorredor :: GetCantTipoSeguros()
{
	return cant_tipo_seguros;
}
int MCorredor :: CantCantTipoSeguros()
{
    return cant_tipo_seguros.size();
}

void MCorredor :: ActualizarCorredor(MContrato contrato, MTipoSeguro ts)
{
	++cant_tipo_seguros[contrato.GetTipoSeguro()-1];
	comision_mensual += contrato.GetPrimaContrato()* ts.GetPorcComi() / 100;
}

