/*
 * Author: Pedro Gabriel Leal
 *
 * Un taller automotriz de la Ciudad de Barquisimeto que trabaja con
   reparaciones el�ctricas, tren delantero y frenos, requiere saber cual es 
   la comisi�n que se le deber� cancelar a cada uno de sus mec�nicos por las
   reparaciones realizadas.
   La comisi�n se calcula en base al monto cobrado y al tipo de reparaci�n, 
   seg�n la siguiente tabla:      

   Tipo de Reparaci�n        Porcentaje de la comisi�n
        El�ctricas                     10
        Tren Delantero                 20
        Frenos                         15

    Los datos de identificaci�n disponibles por cada mec�nico  son: 
        C�dula, nombre y cantidad de reparaciones realizadas, y a su vez 
    Por cada reparaci�n se conoce:
         Tipo de reparaci�n (1. El�ctrica, 2. Tren Delantero 3. Frenos) 
         y el monto cobrado al cliente.

    La informaci�n a reportar
       Por mec�nico: C�dula, nombre, monto total cobrado en comisiones 
       Por el taller: El mayor monto total cobrado en comisiones

 REQUERIMIENTOS
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
   return 0;
}
