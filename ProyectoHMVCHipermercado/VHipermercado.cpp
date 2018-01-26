/*
 * VHipermercado.cpp
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VHipermercado.h"

VHipermercado::VHipermercado() {
	// TODO Auto-generated constructor stub

}

void VHipermercado::ImprimirHipermercado(float acumulador, int contador) {
	Limpiar();
	ImprimirEncabezado("\n\n\tINFORMACION del HIPERMERCADO",
		                 	"\t_________________-__________");

	ImprimirNroDecimal("\n\t Monto total vendido por el hipermercado : ",acumulador);
	ImprimirNro("\n\t Cantidad de muebles que tuvieron un descuento superior de 150 bsf. : ",contador);

	cout<<"\n\n\t\t";
	Pausa();
}


