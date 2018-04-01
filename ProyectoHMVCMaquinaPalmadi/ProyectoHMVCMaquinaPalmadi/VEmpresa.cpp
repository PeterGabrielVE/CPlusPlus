/*
 * VEmpresa.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "VEmpresa.h"

VEmpresa::VEmpresa() {
	// TODO Auto-generated constructor stub

}

void VEmpresa::ImprimirEmpresa(string tipoherrmayor)
{
	Limpiar();
	Limpiar();
    ImprimirEncabezado("\n\n\tINFORMACION DE LA Empresa MAQUINAS PALMADI",
	 			            "\t_________________________________________");
    ImprimirString("\n\tArticulo(s) mas comprados por internet : \n\t", tipoherrmayor);
    cout<<endl<<endl;
	Pausa();
}
