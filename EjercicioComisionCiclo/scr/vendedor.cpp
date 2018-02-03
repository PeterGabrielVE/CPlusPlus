/*
 * vendedor.cpp
 *
 *  Created on: 24/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "vendedor.h"

vendedor::vendedor() {
	// TODO Auto-generated constructor stub

}
void vendedor::asignarCodigoV(string CV)
{
	CodigoV=CV;
}
void vendedor::asignarNombreV(string NV)
{
	NombreV=NV;
}
string vendedor::obtenerCodigoV()
{
	return CodigoV;
}
string vendedor::obtenerNombreV()
{
	return NombreV;
}
