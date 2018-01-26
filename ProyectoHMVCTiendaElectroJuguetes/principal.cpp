/*
 * Principal.cpp
 *
 *  Created on: 11/11/2013
 *      Author: Alirio Martinez
 */
/*
Author: Pedro Gabriel Leal
 *
 *
 *  ENUNCIADO ORIGINAL
 * -----------------
 * En una tienda que vende diferentes tipos de art�culos
 * Se conoce de cada uno su c�digo, descripci�n y costo.
 * Se requiere de un programa que haciendo uso de HERENCIA,
 * permita obtener para los art�culos Electrodom�sticos
 * el color y el precio de venta,sabiendo que
 * el precio de venta es el 50% del costo
 * y para los juguetes el total de ganancia conociendo
 * el Precio de venta.*
 *
 * Sugerencia:
 * Elabore una clase base (superclase, padre) llamada art�culo
 * y dos clases derivadas (subclase, hijo)
 * una para  electrodom�stico y la otra para los juguetes.
 *
 * Ideas:
 * En este programa Ud. podr�a solicitar
 * el dato tipo de art�culo (1-> electrodom�stico, 2-> juguete)
 * y dependiendo de este dato asigna los valores a la clase
 * derivada que corresponda.
 *
 *
 *
 *
 * ENUNCIADO ORIGINAL
 * -----------------
 * EL encargado de una tienda que vende diferentes tipos de art�culos
 * ( Electrodomesticos y juguetes) desea un programa que le permita
 * llevar el control de sus ventas. Actualmente requiere que el programa
 * indique de los articulos electrodomesticos el color y el precio de venta.
 *
 * Asi mismo indica que cada articulo posee un codigo y una descripcion.
 *
 * Para el encargado de la tienda es significativo saber la ganancia total
 * obtenida por la venta de juguetes, que para ello se conoce el precio de venta.
 *
 * Sugerencia:
 * Utilice la clase base generica Articulo, y dos clases derivadas,
 * una para  electrodom�stico y la otra para los juguetes.
 *
 * La idea es que el programa solicite
 * el dato tipo de art�culo (1-> electrodom�stico, 2-> juguete)
 * y dependiendo del mismo, asigna los valores a la clase
 * derivada que corresponda( Electrodomesticos y juguetes).
 *
 *
 *Entrada
 *
 * DATOS COMUNES
 *   - codigo
 *   - descripcion
 *   - costo
 *
 * DATOS ELECTRODOMESTICOS
 *   - Color
 *
 * DATOS JUEGUETES
 *   - precio venta
 *
 *
 *
 *
 * salida
 *  por electrodomestico
 *    - color
 *    - precio venta
 *
 *  por tienda:
 *   Ganancia total obtenida por juguete
 *
 *
 *
 *
 * CONSIDERACIONES
 *   COMUNES:
 *      no hay
 *   ELECTRODOMESTICO
 *      Precio venta= 50% del costo
 *
 *   JUGUETES
 *      Ganancia= precio venta - Costo
 *
 * MENU DE OPCIONES
 * SE INICIALIZA LA VARIABLE CHEQUEO EN FALSO
   Cuando el usuario seleccione la opci�n 1,
   LA VARIABLE CHEQUO SE LE ASIGNA TRUE
 * ASI, CUANDO EL USUARIO SELECCIONES LA OPCON 2 ->ESTADISTICAS
 * se le preguntara  si la variable CHEQUEO esta en TRUE,
 * SI ES ASI SIGNIFICA QUE SE HAN PROCESADO ARTICULOS
 * Y PORSUPUESTO SE PUEDE EJCUTAR LA OPCION 2-> ESTADISTICAS.
 * PERO SI LA VARIABLE CHEQUEO ESTA EN FALSO,
 * SIGNIFICA QUE NO HA ENTRADO EN LA OPCON 1,
 * Y COMO NO HA PROCESADO ATICULOS  NO PUEDE EJECUTAR LAS ESTADISTICAS.
 * EN TAL CASO SE MUESTRA UN MENSAJE DE ERROR.
 *
 */



#include "Controlador.h"
#include "VGeneral.h"

int main()
{
	Controlador c;
	VGeneral vg;
	int opcion;
	bool chequeo=false;

	do
	{
	  vg.Limpiar();
	  vg.ImprimirMensaje("\n\n\n\t\t\t\tMenu de opciones\n\n");
	  vg.ImprimirMensaje("\t\t\t\t1. Procesar Articulos\n");
	  vg.ImprimirMensaje("\t\t\t\t2. Estadisticas\n");
	  vg.ImprimirMensaje("\t\t\t\t3. Salir\n");
	  opcion=vg.LeerValidarNro("\n\t\t\t\tSeleccione opcion[1..3]:",1,3);
	  switch(opcion)
	  {
	  case 1: {
		        c.ProcesarArticulos();
		        chequeo =true;
	          }
              break;
	  case 2:if (chequeo==true)
		      c.Estadisticas();
	          else
	            {
		         vg.ImprimirMensaje("\n\n\tError..Debe Ejecutar opcion 1\n");
		         vg.Pausa();
	            }
	          break;
     }
	}while(opcion!=3);
    return 0;
}
