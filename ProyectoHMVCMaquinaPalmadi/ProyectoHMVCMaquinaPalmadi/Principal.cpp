/*
 * Principal.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"
#include "VGeneral.h"

int main()
{

	Controlador c;
	VGeneral vg;
	int opcion;
	do
	{
	  vg.Limpiar();
	  vg.ImprimirMensaje("\n\n\n\t\t\t\tMenu de opciones\n\n");
	  vg.ImprimirMensaje("\t\t\t\t1. Procesar Herramientas\n");
	  vg.ImprimirMensaje("\t\t\t\t2. Estadisticas \n");
	  vg.ImprimirMensaje("\t\t\t\t3. Salir\n");
	  opcion=vg.LeerValidarNro("\n\t\t\t\tSeleccione opcion[1..3]:",1,3);
	  switch(opcion)
	  {
	  case 1: if (c.GetChequeo()==true)
                {
	              vg.ImprimirMensaje("Error..Archivo y procesado...ejecute opcion 2 para ver estadisticas...\n");
	              vg.Pausa();
                }
              else
		        c.ProcesarHerramientas();
			  break;

	  case 2:if (c.GetChequeo()==false)
	         {
		      vg.ImprimirMensaje("Error..Debe Ejecutar opcion 1\n");
		      vg.Pausa();
	         }
	        else
	        	c.Estadisticas();
	       break;
     }
	}while(opcion!=3);
    return 0;
}

