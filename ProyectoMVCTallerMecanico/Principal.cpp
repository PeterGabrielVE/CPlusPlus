
/*  Principal.cpp
 *  Creado: 08/10/2011
 *  Autor: Pedro Gabriel Leal
 *  Ajustado: 03/03/2012

    Un taller automotriz de la ciudad de Barquisimeto que trabaja con reparaciones
    el�ctricas, tren delantero y frenos, requiere saber cual es la comisi�n que le
    deber� cancelar a cada uno de sus mec�nicos por las reparaciones realizadas.
    La comisi�n se calcula en base al monto cobrado al cliente y al tipo de reparaci�n
    (valor num�rico 1. El�ctricas, 2. Tren Delantero y 3. Frenos), seg�n la siguiente tabla:
    Tipo de Reparaci�n        Porcentaje de la comisi�n
        El�ctricas                     10
        Tren Delantero                 20
        Frenos                         15

    Cada mec�nico recibe unos BsF. que corresponden al monto total de sus comisiones.
    El taller necesita saber,  entre todos los montos totales de comisiones cual fue
    el mayor.
    Adicional, el taller suministra de cada mec�nico los datos de: cedula, nombre y
    cantidad de reparaciones que realizo y por  cada reparaci�n un monto.
*/

#include "Controlador.h"

int main()
{
   Controlador c;
   c.ProcesarMecanicos();
   return 0;
}
