/*
 * principal.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 El hotel  Sierra Hermosa rodeado de montañas y con vista panorámica
 a la ciudad de Mérida y al pico Bolívar ofrece a sus clientes
 cuatro tipos de hospedaje. En la tabla que a continuación se
 presenta, se muestra los tipo de hospedaje que se ofrecen  y su
 correspondiente tarifa diaria. Es importante resaltar que en la
 tarifas ya se encuentra incluido el impuesto.

Tipo de hospedaje		Tarifa
Habitación matrimonial	220,00
Habitación triple	    290,00
Suites 	                660,00
Cabañas	                850,00

Por cada Cliente que visitó Sierra Hermosa se  conoce: cédula, tipo de
hospedaje y cantidad de días que duró el hospedaje.
Se requiere que Ud. elabore un programa aplicando el patrón de diseño
Modelo-Vista-Controlador que  imprima por cada Cliente:  cédula,
cantidad de días que duró la reservación y monto cancelado; así
mismo, el hotel Sierra Hermosa necesita conocer el monto total
recaudado por cada tipo de hospedaje , considerando los tipos de
hospedaje, Suites y Cabañas, cuál de las dos fueron más preferido; y
por último, porcentaje que  representa aquellos clientes que se
hospedaron más de 5 días.
 *
 */

#include "Controlador.h"

  int main()
{
    Controlador c;
    c.ProcesarHotel();
    return 0;
}




