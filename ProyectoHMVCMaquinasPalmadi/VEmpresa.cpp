/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
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
    ImprimirString("\n  Herramienta(s) mas alquiladas :\n  ", tipoherrmayor);
    cout<<endl<<endl;
	Pausa();
}
