/*
 * MCliente.cpp
 *
 *  Created on: 26/05/2014
 *     Author: Pedro Gabriel Leal
 */

#include "MCliente.h"

MCliente::MCliente() {
	// TODO Auto-generated constructor stub
	acummonto=0;
}




float MCliente::GetAcummonto()
{
    return acummonto;
}

void MCliente::SetAcummonto(float acumm)
{
    acummonto = acumm;
}


void MCliente:: Actualizar(float montoapagar)
{
acummonto+=montoapagar;
}

int MCliente::GetCantTerapias()
{
    return cantterapias;
}

void MCliente::SetCantTerapias(int cantterap)
{
    cantterapias = cantterap;
}


