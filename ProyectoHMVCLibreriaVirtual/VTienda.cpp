/*
 * VTienda.cpp
 *
 *  Created on: 12/11/2013
 *     Author: Pedro Gabriel Leal
 */

#include "VTienda.h"

VTienda::VTienda() {
	// TODO Auto-generated constructor stub

}

void VTienda::ImprimirTienda(float gananciatotal, float porcinter, string tipomayor ,
		                     /*Req 1->*/ float menorcostonetodig,
		                     /*Req 2->*/ float menorcostoneto,
		                     /*Req 3->*/ float prompneto40,
		                     /*Req 4->*/ float mayorprecD,
		                     /*Req 4->*/ string titulomayD,
		                     /*Req 4->*/ string autormayD)
{
	Limpiar();
	ImprimirEncabezado("\n\n\tINFORMACION DE LA TIENDA VIRTUAL",
			               "\t________________________________");
	ImprimirNroDecimal("\n\t Ganancia obtenida por todos los libros vendidos : ",gananciatotal );
	ImprimirNroDecimal("\n\t Porcentaje de ventas internacionales: ", porcinter );
	ImprimirString(    "\n\t Tipo de libro con mas venta: ",tipomayor);
	ImprimirNroDecimal("\n\t Menor Costo Neto de los libros digitales : ", menorcostonetodig );//<-Req 1
	ImprimirNroDecimal("\n\t Menor Costo Neto entre todos los libros : ", menorcostonetodig );//<-Req 2
	ImprimirNroDecimal("\n\t Promedio del precio neto de los libros tradicionales\n\tcon mas del 40% de Ganancia: ", prompneto40 );//<-Req 3
	ImprimirMensaje("\n\n\tLibro Digital mas Caro: ");
	ImprimirString("\n\tTitulo: ",titulomayD);
	ImprimirString("\n\tAutor: ",autormayD);
	ImprimirNroDecimal("\n\tPrecio: ",mayorprecD);
	cout<<"\n\n\t\t";
	Pausa();
}
