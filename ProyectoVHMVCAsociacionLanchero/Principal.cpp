/*
 * Principal.cpp
 *
 *  Created on: 05/02/2014
 *
 *       Author:Pedro Gabriel Leal
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
	  vg.ImprimirMensaje("\t\t1. Cargar Datos de los cayos \n");
	  vg.ImprimirMensaje("\t\t2. Procesar traslados \n");
	  vg.ImprimirMensaje("\t\t3. Reporte Lancheros\n");
	  vg.ImprimirMensaje("\t\t4. Listado Ingresos Por cayo\n");
	  vg.ImprimirMensaje("\t\t5. Salir\n");
	  opcion=vg.LeerValidarNro("\n\t\t\t\tSeleccione opcion[1..5]:",1,5);
	  switch(opcion)
	  {
	   case 1: c.CargarDatosCayos();
              break;
	   case 2: c.ProcesarTraslados();
	          break;
	   case 3: c.ReporteLancheros();
	   	      break;
	   case 4: c.ListadoCayos();
	   	   	  break;
      }//switch
	}while(opcion!=5);
    return 0;
}



