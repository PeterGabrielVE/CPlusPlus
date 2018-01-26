/*
 * VArticulo.cpp
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VArticulo.h"

VArticulo::VArticulo() {
	// TODO Auto-generated constructor stub

}

void VArticulo::ImprimirArticulo(string codigoarti, float montoapagar) {
	Limpiar();
	ImprimirEncabezado("\n\n\tINFORMACION del ARTICULO",
			               "\t________________________");
	ImprimirString("\n\t Codigo: ",codigoarti);
	ImprimirNroDecimal("\n\t Monto a pagar: ",montoapagar);

	cout<<"\n\n\t\t";
	Pausa();
}


