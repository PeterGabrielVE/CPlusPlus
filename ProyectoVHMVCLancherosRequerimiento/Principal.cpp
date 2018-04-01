/*
 * Principal.cpp
 *
 *  Created on: 05/02/2014
 *
 *
 *
 *
 *  REQUERIMIENTOS
 *   Req 1
 *   Consulta lanchero:
 *    Dada la cédula de un lanchero y un día de la semana (valor 1 al 7)
 *    mostrar su nombre y el monto total BsF. generado en ese día;
 *    y adicional a la información anterior se necesita conocer
 *    el total de BsF. generado por el lanchero en toda la semana.
 *    (Debe mostrar el nombre del día de la semana no el número).
 *     Por ejemplo:
             Cédula: 7370125
             Nombre: Jesús Madrid
             Día: Miércoles
             Monto BsF.: 1200
             Total Semanal BsF: 10800
 *
 *
 * Req 2
  Listado de Ingresos): Imprimir un listado con los datos que se muestran a continuación:

   LISTADO DE INGRESOS DIARIOS
   Día Semana	Total BsF.
     Lunes	       xxxx
     Martes	       xxxx
     ……	....
     Domingo	   xxxx

NOTA: Observe que en el listado debe mostrar los nombres de los días de la semana.


 *  Req 3
 *  Dada la cedula y un cayo(1..7)
 *  muestre el total de traslados que
 *  realizó el lanchero hacia ese cayo.
 *
 *  Req 4:
 * Dado un cayo(1..7)
 * Muestre el total de traslados realizados hacia ese cayo
 *
 *  Req5:
 *  Muestre la cantidad de lancheros que no realizaron traslados
 *  par un dia en particular(leido por tecado [1..7])
 *
 *
 *      Author: Usuario
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
	  vg.ImprimirMensaje("\t\t5. Consultar Lanchero(Req1)\n");
	  vg.ImprimirMensaje("\t\t6. Listado Ingresos Diarios(Req2)\n");
	  vg.ImprimirMensaje("\t\t7. Traslados de lanchero en un cayo) (req3)\n");
	  vg.ImprimirMensaje("\t\t8. total de traslados realizados hacia un cayo(Req4)\n");
	  vg.ImprimirMensaje("\t\t9. Cantidad de lancheros que no realizaron traslados en un dia(Req5)\n");
	  vg.ImprimirMensaje("\t\t10. Salir\n");
	  opcion=vg.LeerValidarNro("\n\t\t\t\tSeleccione opcion[1..10]:",1,10);
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
	   case 5: c.ConsultarLanchero();
	   	   	  break;
	   case 6: c.ListadoIngresosDiarios();
	   	   	  break;
	   case 7: c.MostrarTraslxLancheroUnCayo();
	   	   	  break;
	   case 8: c.MostrarCantTrasladosxCayo();
	   	   	  break;
	   case 9: c.MostrarCantLacherosSinTraslados();
	   	   	   	  break;
      }//switch
	}while(opcion!=10);
    return 0;
}



