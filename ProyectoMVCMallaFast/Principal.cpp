/*
 * Principal.cpp
 *
 *  Created on: 30/10/2013
 *      Author: Pedro Gabriel Leal
 *      PLANTEAMIENTO:
La empresa “MallaFast” es productora de dos (2) tipos de mallas: Mallas
planas y Mallas en rollo. La alta gerencia ha decidido dar un incentivo
a sus clientes otorgando descuentos de acuerdo a la cantidad de años
que el cliente tiene comprando las mallas, según la siguiente tabla:
Cantidad de años que el cliente tiene
comprando las mallas                   % Descuento
Menos de 5 años                                8
5 años o más pero menos de 8 años             12
8 años o más                                  20

Estos porcentajes de descuentos son calculados sobre el precio actual
que tiene la malla que el cliente este comprando.
En estos momentos el precio de la malla plana es de Bs. 4000 por metro
y de la malla de rollo es de Bs. 2500 por metro.
Es importante aclarar que cada cliente puede comprar un solo tipo de
malla.
Se requiere que Ud. elabore un programa aplicando el patrón de diseño
Modelo-Vista- Controlador que teniendo como datos del cliente Cédula,
Nombre, Tipo de malla a comprar (‘1’ Mallas planas, ‘2’ Mallas en rollo)
, Metros a comprar y los Años que el cliente tiene comprando en la
empresa, permita calcular el monto total del descuento en Bs. que
tendrá el cliente.
La salida del programa deberá mostrar Cédula, Nombre, Malla comprada
y Monto del
Descuento.
Además la Empresa necesita saber:
 El menor descuento otorgado.
 Porcentaje de Clientes que tienen más de diez (10) años comprando
en la empresa.
 */

#include "Controlador.h"

using namespace std;

int main()
{
    Controlador c;
    system("color 1f");
    system("title 00°°PROGRAMA UNIVERSIDAD°°00");
    c.ProcesarEmpresa();
    c.Reporte();
    return EXIT_SUCCESS;
}



