/*
 * MElectrodomestico.cpp
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MElectrodomesticos.h"

MElectrodomesticos::MElectrodomesticos()
{
	// TODO Auto-generated constructor stub

}

string MElectrodomesticos::GetColor()
{
    return color;
}

void MElectrodomesticos::SetColor(string c)
{
    color = c;
}

float MElectrodomesticos::CalcularPvp() {
	return (costo + (costo * 0.5));
}




