/*
 * Principal.cpp
 *
 *  Created on: 05/01/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"
#include "VGeneral.h"

int main()
{
   int opc;
   VGeneral  vg;
   Controlador c;
   do
   {
     vg.Limpiar();
     vg.ImprimirLineasBlanco(2);
     vg.Limpiar();
     vg.ImprimirEncabezado("\n      M E N U  O P C I O N E S\n","      =======  ===============");
     vg.ImprimirMensaje("   1. CARGAR CORREDORES DE SEGUROS Y TIPOS DE SEGUROS\n");
     vg.ImprimirMensaje("   2. PROCESAR CONTRATOS DE SEGUROS VENDIDOS\n");
     vg.ImprimirMensaje("   3. REPORTE CORREDORES QUE SUPERARON META DE VENTA DE UN TIPO DE SEGURO\n");
     vg.ImprimirMensaje("   4. CONSULTAR CANTIDAD DE CONTRATOS DE SEGUROS VENDIDOS POR UN TIPO DE SEGURO\n");
     vg.ImprimirMensaje("   5. REPORTE COMISIONES CORREDORES DE SEGUROS\n");
     vg.ImprimirMensaje("   6. FINALIZAR\n\n");
     opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,6);
     switch (opc)
     {
      case 1: c.CargarCorredores();
      	  	  c.CargarTiposSeguros();
              break;
      case 2: c.ProcesarContratos();
              break;
      case 3: c.ReporteCorredoresSuperaronMetaVenta();
              break;
      case 4: c.ConsultaTipoSeguro();
              break;
      case 5: c.ReporteCorredores();
              break;
     }
   }
   while(opc != 6);
   return 0;
}


