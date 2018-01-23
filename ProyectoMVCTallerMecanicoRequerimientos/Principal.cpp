/*
 * Principal.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 *       Un taller automotriz de la Ciudad de Barquisimeto que trabaja con
   reparaciones eléctricas, tren delantero y frenos, requiere saber cual es
   la comisión que se le deberá cancelar a cada uno de sus mecánicos por las
   reparaciones realizadas.
   La comisión se calcula en base al monto cobrado y al tipo de reparación,
   según la siguiente tabla:

   Tipo de Reparación        Porcentaje de la comisión
        Eléctricas                     10
        Tren Delantero                 20
        Frenos                         15

    Los datos de identificación disponibles por cada mecánico  son:
        Cédula, nombre y cantidad de reparaciones realizadas, y a su vez
    Por cada reparación se conoce:
         Tipo de reparación (1. Eléctrica, 2. Tren Delantero 3. Frenos)
         y el monto cobrado al cliente.

    La información a reportar
       Por mecánico: Cédula, nombre, monto total cobrado en comisiones
       Por el taller: El mayor monto total cobrado en comisiones */


 /* REQUERIMIENTOS
  * Por mecanico:
  *   -cual fue el mayor monto reunido por comision.
  *
  * por taller:
  *   -total bs que ingresaron al taller.
  *   -tipo de reparacion con mayor ganancia.
  *
  */

#include "Controlador.h"

int main()
{
   Controlador c;
   c.ProcesarMecanicos();
   c.ReporteTaller();
   return 0;
}




