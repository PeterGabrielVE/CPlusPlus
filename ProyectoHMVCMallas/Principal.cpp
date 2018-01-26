/*
 * Controlador.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 *
 * La empresa Malla Fast es productora de dos tipos de mallas: mallas plana y mallas de rollo.
 * La alta geencia ha decidido dar un incentivo a sus clientes,
 * otorgando descuentos de  acuerdo a la sigiente tabla:
 *
 * cantidda de a�os que tienen comprando mallas   % descuento
 *   menos de 5 a�os                                   8%
 *   5 a�os o m�s pero menos de 8                     12%
 *   mas de 8 a�os                                    20%
 *
 *   Estos porcentajes de descuento son calculados sobre el precio actual que tiene la malla
 *   que el cliente este comprando.
 *   En estos momentos, el precio de la malla plana es de 4000 bsf y el de la malla de rollo es de 2500 bsf
 *   Es importante aclarar que cada cliente puede comprar un solo tipo de malla.
 *
 *   Se requiere que ud elabore un programa aoplicando el patr�n modelo vista controlador,
 *   que teniendo como datos del cliente:
 *   cedula
 *   nombre
 *   tipo de malla(1 malla plana, 2 malla de rollo)
 *   metros a comprar,
 *   a�o que tiene el client comprando en l empresa, permita  calcular
 *   el monto total del descuento en bsf que tendr� el cliente.
 *
 *   La salida del programa deber� mostrar :
 *    cedula
 *    Nombre
 *    Tipo de malla comprada
 *    Monto del descuento
 *
 *   Ademas la empresa desea saber:
 *   Porcentaje de clientes que tienen m�s d 10 a�os coprando en la empresa.
 *   al final la empresa quiere saber el menor descuento otorgado
 *
 *
 *
 *
 *
 */



#include "Controlador.h"

using namespace std;

int main()
{
    Controlador c;
    c.ProcesarClientes();
    c.ReporteEmpresa();
    return EXIT_SUCCESS;
}
