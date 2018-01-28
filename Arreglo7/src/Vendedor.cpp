/*
 * vendedor.cpp
 *
 *  Created on: 22/07/2012
 *      Author: Pedro
 */

#include "vendedor.h"

void vendedor::setNombre(string elNombre)
{
	 nombre = elNombre;
}
string vendedor::getNombre()
{
	return nombre;
}
void vendedor::setTotalV(float elTotal)
{
	totalV = elTotal;
}
float vendedor::getTotalV()
{
	return totalV;
}
vendedor::vendedor()
{
	// TODO Auto-generated constructor stub	
}

