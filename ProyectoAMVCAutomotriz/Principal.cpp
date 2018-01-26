/*
 * Principal.cpp
 *
 *  Created on: 05/06/2012
 *  Author: Pedro Gabriel Leal
   Una empresa distribuidora de repuestos automotriz, requiere de un sistema que le permita  llevar el control
   de los vendedores que tiene contratados, adem�s de calcular el monto total de la comisi�n que le deber�
   cancelar a cada uno, por las ventas realizadas. Actualmente, la comisi�n es del 20% sobre el monto total
   vendido.
   Adicional a la comisi�n, la empresa otorgar� una bonificaci�n especial a los vendedores cuyo monto total
   vendido supere los 80.000 BsF, y esa bonificaci�n ser� del 3% de la comisi�n que le corresponde.
   La empresa inform� que de cada vendedor se tienen registrados los siguientes datos: c�dula, nombre y
   monto total vendido.
   Entre algunas de las actividades de control que requiere la empresa, se encuentran:
   la actualizaci�n de datos de los vendedores, tambi�n presentar listados ordenados � no,
   buscar la mayor o menor comisi�n y quienes la obtuvieron,�..
   Para eso, el programa deber� presentar un men� con las siguientes opciones.
        1. Actualizar vendedor
        2. Ordenar vendedores
        3. Comisi�n mayor y vendedores que la obtuvieron
        4. Listado de vendedores
        8. Salir
*/
#include "Controlador.h"
int main()
{  int opc;
   Controlador c;
   VGeneral vg;

   do
   { vg.Limpiar();
     vg.ImprimirEncabezado("\n  M E N U  O P C I O N E S \n",
    		                 "  =======  ===============");
     vg.ImprimirMensaje("\n  1.  Actualizar Vendedor \n");
     vg.ImprimirMensaje("\n  2.  Comision mayor y listado de cedulas \n");
     vg.ImprimirMensaje("\n  3.  Listado de Vendedores ordenado por cedula \n");
     vg.ImprimirMensaje("\n  4.  Salir\n\n");
     vg.ImprimirLineasBlanco(2);
     opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,5);
     switch (opc)
    {   case 1: c.Actualizar();
                  break;
        case 2: c.ComisionMayorListado();
                  break;
        case 3: c.ListadoVendedores();
                  break;
     }
   } while(opc != 4);
  return 0;
}




