/*
 * VEmpleado.cpp
 *
 *  Created on: 15/11/2013
 *     Author: Pedro Gabriel Leal
 */

#include "VEmpleado.h"

VEmpleado::VEmpleado() {
	// TODO Auto-generated constructor stub

}

void VEmpleado::ImprimirEmpleado(string nombre, string cedula, int age, float montoapagar, float montocuotas)
{
	Limpiar();
	ImprimirEncabezado("\n\n\tINFORMACION DEL EMPLEADO",
			                   "\t________________________");

		ImprimirString( "\n\t Nombre: ", nombre);
		ImprimirString("\n\t Cedula: ", cedula);
		ImprimirNro("\n\t Edad: ", age);
		ImprimirNroDecimal("\n\t Monto a Pagar: ", montoapagar );
		ImprimirNroDecimal("\n\t Monto Por Cuota: ", montocuotas );

		cout<<"\n\n\t\t";


}
