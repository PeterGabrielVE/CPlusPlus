/*
 * MTelefono.cpp
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#include "MTelefono.h"

MTelefono::MTelefono() {
	// TODO Auto-generated constructor stub
}

void MTelefono::SetNumero(int nro)
{
    numero = nro;
}

void MTelefono::SetRentabasica(float rentab)
{
    rentabasica = rentab;
}

void MTelefono::SetTipo(int t)
{
    tipo = t;
}

int MTelefono::GetNumero()
{
    return numero;
}

float MTelefono::GetRentabasica(){
    return rentabasica;
}

int MTelefono::GetTipo()
{
    return tipo;
}




