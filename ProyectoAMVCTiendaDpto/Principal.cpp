/*
 * Principal.cpp
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 *
 *  Una gran tienda de la ciudad de Barquisimeto, donde los art�culos que vende se encuentran
  distribuidos por  departamentos; requiere de un programa que le permita realizar una
  evaluaci�n de las ventas realizadas en cada uno de sus cinco departamentos.
  Para dicha evaluaci�n necesita obtener lo siguiente:
  1. Un listado donde se muestre el C�digo, Nombre y el Monto total de ventas del departamento.
  2. Monto total vendido por la tienda.
  3. Promedio de ventas de la tienda.
  La informaci�n disponible se encuentra organizada  en dos partes:
  PRIMERA PARTE: Informaci�n de Identificaci�n de los Departamentos.
   Se sabe que los departamentos tienen asignado:
   C�digo (que es un valor num�rico consecutivo que comienza en 1) y una Descripci�n.
  SEGUNDA PARTE: Informaci�n de Art�culos vendidos.
  Por cada venta se registran los siguientes datos:
      C�digo del departamento (nro. del 1 al 5), Cantidad vendida y Precio unitario.
  Es importante aclarar, que la informaci�n de entrada de los art�culos vendidos
  NO VIENE ORDENADA POR NING�N DATO.
  Elabore un programa, con men� de opciones y vectores con sub�ndice con significado,
  que permita resolver este planteamiento.
  El men� deber� presentar las siguientes opciones:
           1. Cargar datos departamentos
           2. Procesar ventas
           3. Reporte tienda
           4. Salir   */

#include "Controlador.h"

int main()
{  int opc;
   VGeneral  vg;
   Controlador c;
   do
   { vg.Limpiar();
     vg.ImprimirLineasBlanco(3);
     vg.ImprimirEncabezado("   M E N U  O P C I O N E S","   =======  ===============\n\n");
     vg.ImprimirMensaje("   1. Cargar datos departamentos\n");
     vg.ImprimirMensaje("   2. Procesar ventas\n");
     vg.ImprimirMensaje("   3. Reporte tienda\n");
     vg.ImprimirMensaje("   4. Salir\n\n");
     opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,4);
     switch (opc)
     { case 1: c.CargarDatosDepartamentos();
              break;
      case 2: c.ProcesarVentas();
              break;
      case 3: c.ReporteTienda();
              break;
     }   
   } while(opc != 4);
   return 0;     
}
