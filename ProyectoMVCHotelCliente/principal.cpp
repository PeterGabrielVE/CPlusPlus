/*
 * principal.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 El hotel  Sierra Hermosa rodeado de monta�as y con vista panor�mica
 a la ciudad de M�rida y al pico Bol�var ofrece a sus clientes
 cuatro tipos de hospedaje. En la tabla que a continuaci�n se
 presenta, se muestra los tipo de hospedaje que se ofrecen  y su
 correspondiente tarifa diaria. Es importante resaltar que en la
 tarifas ya se encuentra incluido el impuesto.

Tipo de hospedaje		Tarifa
Habitaci�n matrimonial	220,00
Habitaci�n triple	    290,00
Suites 	                660,00
Caba�as	                850,00

Por cada Cliente que visit� Sierra Hermosa se  conoce: c�dula, tipo de
hospedaje y cantidad de d�as que dur� el hospedaje.
Se requiere que Ud. elabore un programa aplicando el patr�n de dise�o
Modelo-Vista-Controlador que  imprima por cada Cliente:  c�dula,
cantidad de d�as que dur� la reservaci�n y monto cancelado; as�
mismo, el hotel Sierra Hermosa necesita conocer el monto total
recaudado por cada tipo de hospedaje , considerando los tipos de
hospedaje, Suites y Caba�as, cu�l de las dos fueron m�s preferido; y
por �ltimo, porcentaje que  representa aquellos clientes que se
hospedaron m�s de 5 d�as.
 *
 */

#include "Controlador.h"

  int main()
{
    Controlador c;
    c.ProcesarHotel();
    return 0;
}




