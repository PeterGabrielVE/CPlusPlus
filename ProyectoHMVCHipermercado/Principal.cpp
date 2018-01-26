/*
 * Principal.cpp
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal

Un hipermercado ubicado en las ciudades de Barquisimeto requiere de un sistema computarizado que le permita llevar el control de los art�culos que vende a lo largo del a�o. El gerente del hipermercado inform� que solo necesita que el sistema control de los art�culos electrodom�sticos y muebles; de tal manera que los electrodom�stico pertenecen a los art�culos tipo 1, y los muebles est�n asociados con el tipo 2.
Independiente del tipo de articulo sea 1 o 2, se mantienen los siguientes datos: c�digo, descripci�n y costo. Se aclara que el costo son los Bsf que paga el hipermercado al proveedor. Por supuesto es importante el dato tipo del art�culo, ( 1. Electrodom�stico  2. Mueble) 
Despu�s de haber conversado con el gerente del hipermercado se obtuvo la siguiente informaci�n:
Los electrodom�sticos que venden son: 1.Nevera   2.Lavadora    3.Cocina  4.Secadora. 
Cada articulo electrodom�stico tiene un serial, una garant�a (en meses) ,  una marca y un tipo de electrodom�stico.
Con relaci�n a los muebles es importante guardar el tipo de material, el cual se identifica con un numero de 1 a 3, as�  El �1� se refiere a muebles de madera, el �2� est� asociado a muebles de hierro forjado, y finalmente el �3� son muebles de rat�n.
El precio de venta para los electrodom�sticos es igual a su costo m�s un incremento del 40 % sobre dicho costo. Y para los muebles, el precio de venta tambi�n es igual al costo m�s un incremento de dicho costo, pero este �ltimo  va a depender del tipo de mueble, as�:
    Tipo                 Incremento
 1.Madera                 20%
 2.Hierro Forjado     30%
 3.Ratan                     35%
El Hipermercado establece que todos los muebles tendr�n un descuento del 10% sobre el precio de venta.
Cuando un cliente compra un electrodom�stico debe cancelar el flete para el traslado del mismo. Se establece que el flete es el 3% del precio de venta.
No se considera IVA.
El Objetivo final es que el sistema indique por cada art�culo, cual es el monto total que debe cancelar el cliente, informaci�n que debe estar acompa�ada de con el c�digo del art�culo. Por otra parte se necesita conocer el monto total vendido por el hipermercado y la cantidad de muebles que tuvieron un descuento superior de 150 bsf.



 */

#include "Controlador.h"
#include "VGeneral.h"

int main()
{

	Controlador c;
	VGeneral vg;
	int opcion;
	bool ok = false;
	do
	{
	  vg.Limpiar();
	  vg.ImprimirLineasBlanco(6);
	  vg.ImprimirMensaje("\t\t\t\tMenu de opciones\n\n");
	  vg.ImprimirMensaje("\t\t\t\t1. Procesar Articulos\n");
	  vg.ImprimirMensaje("\t\t\t\t2. Estadisticas \n");
	  vg.ImprimirMensaje("\t\t\t\t3. Salir\n");
	  opcion=vg.LeerValidarNro("\n\t\t\t\tSeleccione opcion[1..3]:",1,3);
	  switch(opcion)
	  {
	  case 1:   {
		            c.ProcesarArticulos();
		            ok= true;
	            }
	            break;

	  case 2:  if (ok)//.....Que es equivalente a la sentencia: if(ok==true)
		           c.Estadisticas();
	           else
	            {
		          vg.ImprimirMensaje("Error..Debe Ejecutar opcion 1\n");
		          vg.Pausa();
	            }
	            break;
     }
	}while(opcion!=3);
    return 0;
}



