/*
 * MTradicional.cpp
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MTradicional.h"


MTradicional::MTradicional() {
	// TODO Auto-generated constructor stub

}

void MTradicional::SetDireccion(string dir)
{
    direccion = dir;
}

void MTradicional::SetPeso(float p)
{
    peso = p;
}

void MTradicional::SetTipocompra(int tipoc)
{
    tipocompra = tipoc;
}



string MTradicional::GetDireccion()
{
    return direccion;
}

float MTradicional::GetPeso()
{
    return peso;
}

int MTradicional::GetTipocompra()
{
    return tipocompra;
}

//calculos

float MTradicional::CalcMontoFlete()
{
	if(peso<=1)
		return 250;
	else
		return 500;

	/*Enunciado: "Para los libros Tradicionales se agregan al costo Bs. 250 por flete
	 *            que debe cancelar el cliente en el caso que el libro pese menos de 1 Kg
	 *            o Bs. 500 en el caso que pese m�s de eso"
	 */

}

float MTradicional::CalcRecargoPvp()
{
	if (tipocompra==2)
		return GetPvp() * 0.02;
	else
		return 0;
	/* Enunciado: "el cliente debe pagar adicional el 2% del PVP por concepto de Nacionalizaci�n"
	 * esto significa que hay un recargo del 2% sobre el pvp, el cual debe sumarse al pvp del libro.
	 * recordemos que el pvp es un dato de entrada para libro tradicional-- ok
	 *
	 */
}



float MTradicional::CalcPrecioNeto()
{
	return GetPvp() + CalcRecargoPvp() + CalcMontoFlete();

}

float MTradicional::CalcCostoNeto()
{
    return GetCosto();
}

float MTradicional::CalcGanancia()
{
	return GetPvp() - CalcCostoNeto();
	/* en el enunciado dice: " Para el c�lculo de la ganancia considere el costo neto del libro"
	 * y el precio de venta al p�blico (pvp)
	 */
}
