/*
 * Principal.cpp
 *
 *  Created on: 16/11/2013
 *      Author: Pedro Gabriel Leal
 *
 *  3) En la empresa "Inversiones Las Marías, C.A.", se ofrecen préstamos a sus empleados,
	en vista de esto, el dueño necesita agilizar el control de los préstamos; para ello
	necesita contar con la información referente al monto de las cuotas por empleado.
	Se sabe, que la empresa realiza los préstamos bajo las siguientes condiciones: a
	las mujeres se les da 3 años para cancelar y a los hombres 2 años; además, se sabe
	que se les cobra un 15% del monto del préstamo si es mujer menor de 60 años, un
	10% si es mujer de 60 años o más, un 20% si es hombre menor de 65 años y un 15% si
	es hombre de 65 años en adelante.
	Adicionalmente, se conoce que al momento que el empleado ingresa a la
	empresa se le registra su cédula y nombre.
	Cabe destacar que la empresa, además de la información respectiva de cada
	empleado, desea que se genere: Monto total ofrecido en préstamo a sus
	trabajadores, porcentaje de préstamos otorgados a las mujeres menores de 60 años
	con relación al total de mujeres que solicitaron préstamos y por último el promedio
	de BsF. correspondiente a los préstamos otorgados a los hombres.
 */


#include "Controlador.h"

int main()
{
	Controlador c;
	c.ProcesarEmpleados();
	c.ImprimirEmpresa();
	return 0;
}
