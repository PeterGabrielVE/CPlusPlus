/*
 * VHerramienta.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "VHerramienta.h"

VHerramienta::VHerramienta() {
	// TODO Auto-generated constructor stub

}
void VHerramienta::ImprimirHerramienta(string codigo, string descripcion,
			                           float iva, float montofinalalquiler)
{
	 Limpiar();
	 ImprimirEncabezado("\n\n\tINFORMACION Herramienta",
	 			            "\t______________________________________");
	 ImprimirString("\n\t Codigo: ",codigo);
	 ImprimirString("\n\t Descripcion : ",descripcion );
	 ImprimirNroDecimal("\n\t Monto IVA: ",iva);
	 ImprimirNroDecimal("\n\t Monto Final Alquiler: ",montofinalalquiler);
	 cout<<"\n\n\t\t";
	 Pausa();
}

