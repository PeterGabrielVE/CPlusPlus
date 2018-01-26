/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VHerramienta.h"

VHerramienta::VHerramienta() {
	// TODO Auto-generated constructor stub

}
void VHerramienta::ImprimirHerramienta(string codigo, string descripcion,
			                           float iva, float montofinalalquiler,
			                           string nombreherr)
{
	 Limpiar();
	 ImprimirEncabezado("\n\n\tINFORMACION Herramienta",
	 			            "\t______________________________________");
	 ImprimirString("\n\t Herramienta: ",nombreherr);
	 ImprimirString("\n\t Codigo: ",codigo);
	 ImprimirString("\n\t Descripcion : ",descripcion );
	 ImprimirNroDecimal("\n\t Monto IVA: ",iva);
	 ImprimirNroDecimal("\n\t Monto Final Alquiler: ",montofinalalquiler);
	 cout<<"\n\n\t\t";
	 Pausa();
}

