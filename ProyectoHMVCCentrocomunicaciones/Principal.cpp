/*
 * principal.cpp
 *
 *  Created on: 21/11/2013
 *      Author: Pedro Gabriel Leal
 *
 *  5)El dueño de un Centro de Comunicaciones, desea un sistema que le permita llevar el
	control de los teléfonos que administra, se sabe que los mismos cuentan con un
	número y una renta básica. Al momento de alquilar un teléfono, se puede presentar
	que la llamada sea para un teléfono fijo o para un celular. Según sea el caso, se
	obtendrán ciertas estadísticas, por tanto para ambos (fijo ó celular) se deben mostrar
	sus datos, solo que si la llamada es a un teléfono fijo es significativo indicar el monto
	total a pagar sabiendo los minutos adicionales y que c/u tiene un costo de 0.3 BsF. Si
	la llamada corresponde a un celular es importante señalar lo pagado adicional,
	conociendo el monto total pagado.
	Así mismo, el dueño del centro de comunicaciones está realizando un estudio de
	la factibilidad económica del mismo, por tanto requiere que se indique el total
	recaudado por el centro de comunicaciones.
 */


#include "Controlador.h"
#include "VGeneral.h"

int main()
{

	Controlador c;
	VGeneral vg;
	int opcion;
	bool chequeo;
	do
	{
	  vg.Limpiar();
	  vg.ImprimirMensaje("\n\n\n\t\t\t\tMenu de opciones\n\n");
	  vg.ImprimirMensaje("\n\t\t\t\t1. Procesar Telefonos\n");
	  vg.ImprimirMensaje("\n\t\t\t\t2. Estadisticas \n");
	  vg.ImprimirMensaje("\n\t\t\t\t3. Salir\n");
	  opcion=vg.LeerValidarNro("\n\n\t\t\t\tSeleccione opcion[1..3]:",1,3);
	  switch(opcion)
	  {
	  case 1: {
		        c.ProcesarTelefonos();
		        chequeo=true;
	          }
			  break;

	  case 2:if (chequeo==true)
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
