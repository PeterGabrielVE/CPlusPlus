/*
 * Principal.cpp
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */


#include "Controlador.h"

int main()
{  int opc;
   VGeneral  vg;
   Controlador c;
   do
   { vg.Limpiar();
     vg.ImprimirLineasBlanco(1);
     vg.ImprimirEncabezado("   M E N U  O P C I O N E S","   =======  ===============");
     vg.ImprimirMensaje("   1. Cargar datos de servicios\n");
     vg.ImprimirMensaje("   2. Procesar peluqueras\n");
     vg.ImprimirMensaje("   3. Consulta peluquera\n");
     vg.ImprimirMensaje("   4. Reporte peluqueria\n");
     vg.ImprimirMensaje("   5. Salir\n\n");
     opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,5);
     switch (opc)
     {case 1: c.CargarDatosServicios();
              break;
      case 2: c.ProcesarPeluqueras();
              break;
      case 3: c.ConsultaPeluquera();
              break;
      case 4: c.ReportePeluqueria();
              break;
     }   
   } while(opc != 5);
   return 0;     
}
