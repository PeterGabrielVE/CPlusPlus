/*
 * principal.cpp
 *
 *  Created on: 06/11/2013
 *     Author: Pedro Gabriel Leal
 *  La oficina de personal de una reconocida empresa textil est� preparando las vacaciones de agosto de
algunos de sus empleados, y se sabe que las mismas no se extender�n hasta septiembre.
Para preparar el pago que le corresponder� a cada empleado por el disfrute de sus vacaciones, la oficina de personal necesita
saber por cada uno, cuantos d�as disfrutar� de vacaciones y el monto que debe cancelarle por
el sueldo vacacional.
De cada empleado se conoce su c�dula, nombre, d�a inicial a partir del cual
disfrutar� sus vacaciones, d�a final (es el �ltimo d�a de sus vacaciones), sueldo diario
vacacional. A nivel gerencial es importante, saber la cantidad de empleados que saldr�n de
vacaciones antes del 15 de agosto.
Requerimiento:
Ahora la empresa desea otorgar un bono especial segun el estado civil, si es soltero
se le otorga el 5% del sueldo vacacional,en caso de ser casado
un 7% en cualquier otro caso no se le otorga nada.
Considere el estado civil
1.Soltero, 2.Casado , 3. Divorciado , 4.Viudo
Cantidad de empleados que percibieron el bono especial.
 */

#include "Controlador.h"
int main()
{
Controlador c;
c.ProcesarVacacionesEmpleados();
return 0;
}


