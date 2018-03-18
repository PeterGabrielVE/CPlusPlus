/*
 * MDigital.cpp
 *
 *  Created on: 12/11/2013
 *     Author: Pedro Gabriel Leal
 */

#include "MDigital.h"

MDigital::MDigital() {
	// TODO Auto-generated constructor stub

}

void MDigital::SetCantmegas(int cm)
{
    cantmegas = cm;
}

int MDigital::GetCantmegas()
{
    return cantmegas;
}


float MDigital::CalcRecargoHosting()
{
	if(cantmegas > 1500)
		return 0.01*GetCosto();
	 else
	    return 0.005 *GetCosto();
	/* Si ocupa m�s de 1500 MB se cancelan EL 1% DEL COSTO �
	  EL 0.5% DEL COSTO en caso contrario.*/
}

float MDigital::CalcCostoNeto()
{
	return GetCosto() +  CalcRecargoHosting();
	/* Enunciado: "Para los libros Digitales se adiciona al costo un monto por hosting
	 * (este lo debe cancelar el due�o de la tienda)"
	 * Como lo cancela el due�o de la tienda, es un monto que debe incrementar el costo del libro,
	 * es decir, es un recargo a cancelar, produciendo asi, el costo neto. ok
	 */

}

float MDigital::CalcPvp()
{
	return CalcCostoNeto() + (0.30* CalcCostoNeto());

	/*
	 * el PVP es igual al costo neto del libro  + 30% del costo neto.
	 */
}

float MDigital::CalcPrecioNeto()
{
	return CalcPvp();

}


float MDigital::CalcGanancia()
{
  return CalcPvp() - CalcCostoNeto();
  /* En el enunciado dice: " Para el c�lculo de la ganancia considere el costo neto del libro
   * y el precio de venta al p�blico (pvp)"
   */
}



