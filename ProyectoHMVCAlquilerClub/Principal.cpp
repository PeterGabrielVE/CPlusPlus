/*
 * Principial.cpp
 *
 *  Created on: 23/11/2013
 *  Author:Pedro Gabriel Leal
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
	  vg.ImprimirMensaje("\n\t\t\t\t1. Procesar Alquileres\n");
	  vg.ImprimirMensaje("\n\t\t\t\t2. Estadisticas \n");
	  vg.ImprimirMensaje("\n\t\t\t\t3. Salir\n");
	  opcion=vg.LeerValidarNro("\n\n\t\t\t\tSeleccione opcion[1..3]:",1,3);
	  switch(opcion)
	  {
	  case 1: {
		        c.ProcesarEventos();
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
