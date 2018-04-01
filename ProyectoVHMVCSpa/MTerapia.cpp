/*
 * MTerapia.cpp
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#include "MTerapia.h"

string MTerapia::GetCodigo()
{
    return codigo;
}

string MTerapia::GetDescripcion()
{
    return descripcion;
}

float MTerapia::GetPrecio()
{
    return precio;
}

int MTerapia::GetTipotratamiento()
{
    return tipotratamiento;
}

void MTerapia::SetCodigo(string cod)
{
   codigo = cod;
}

void MTerapia::SetDescripcion(string desc)
{
   descripcion = desc;
}

void MTerapia::SetPrecio(float prec)
{
   precio = prec;
}

void MTerapia::SetTipotratamiento(int tipotrat)
{
   tipotratamiento = tipotrat;
}

MTerapia::MTerapia() {
	// TODO Auto-generated ructor stub

}

