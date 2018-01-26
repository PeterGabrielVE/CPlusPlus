/*
 * VEmpresa.cpp
 *
 *  Created on: 15/11/2013
 *     Author: Pedro Gabriel Leal
 */

#include "VEmpresa.h"

VEmpresa::VEmpresa() {
	// TODO Auto-generated constructor stub

}

void VEmpresa::ImprimirEmpresa(float montototal, float porcentaje, float promedio)
{
	Limpiar();
	ImprimirEncabezado("\n\n\tINFORMACION DE LA EMPRESA",
				               "\t________________________________");
	ImprimirNroDecimal("\n\t Monto Total Ofrecido en Pr�stamos a los Empleados: ",montototal );
	ImprimirNroDecimal("\n\t Prcentaje de Pr�stamos a Mujeres Menores de 60: ", porcentaje );
	ImprimirNroDecimal("\n\t Promedio en Bsf Pr�stamos a Hombres: ",promedio);
	cout<<"\n\n\t\t";
	Pausa();
}
