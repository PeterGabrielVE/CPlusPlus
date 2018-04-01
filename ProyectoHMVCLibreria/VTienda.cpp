/*
 * VTienda.cpp
 *
 *  Created on: 05/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "VTienda.h"

VTienda::VTienda() {}

void VTienda::ImprimirControldeCompras(float g,float p,string m)
{
	Limpiar();
	cout<<"Informaci�n de Ventas"<<endl;
	cout<<"**********************"<<endl;
	ImprimirNroDecimal("\n\n Total Ganancias Obtenidas:",g);
	ImprimirNroDecimal("\n\n Porcentaje de Ventas Internacionales:",p);
	ImprimirString("\n\n Tipo de Libro con Mayor Venta:",m);
	ImprimirLineasBlanco(2);
	Pausa();
}

