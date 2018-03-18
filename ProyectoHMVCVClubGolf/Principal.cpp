/*
 * Principal.cpp
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal


POR AREA
  tipo(1..7)
  descripcion
   porcentaje descto

 POR   por el servicio de alquiler de cada uno de los eventos
  *Codigo(dato tipo string),
  *Descripcion
    ( Matrimonios en la Piscina,
      Matrimonios en la Mezzanina,
      Quince a�os en la piscina,
      Quince a�os en la Mezzanina,
      fiesta en el parque infantil,
      fiesta infantil en la piscina, etc.)
  *precio del alquiler
  *area del club establecida para realizar
    dicho evento(dato tipo entero) -> TIPO


 Elabore un POO, MVC, Herencia y Vectores que presente el siguiente Men� de Opciones:
 1.Registrar Informacion de las Areas.
 2.Registrar Informacion de los Servicios de Alquiler de cada Evento Social.
 3.Procesar Alquileres.
 4.Reporte Estadistico.
 5.Salir

 opciones

 Opcion 1 (Registrar Informacion de las Areas): esta opci�n permite que se cargue por teclado, la informaci�n de los servicios de alquiler de todos los eventos sociales que se pueden realizar en el club.Recuerde que debe realizar Todas las Validaciones
 Opci�n 2 (Registrar Informacion de los Servicios de Alquiler de cada Evento Social): esta opci�n permite que se cargue por teclado, la informaci�n de los servicios de alquilerde los eventos sociales que pueden realizarse en el club.
 Opcion 3 (Procesar Alquileres): esta Opcion permite procesar la informaci�n de cada uno de los alquileres que fueron realizados durante un mes, para ello debe leer por teclado el c�digo del servicio de alquier del evento social y el numero de acci�n del socio que realizo el alquiler (dato tipo string) posteriormente debe realizar los respectivos procesos que permitan generar todos los requerimientos solicitados. Recuerde que debe realizar todas las Validaciones
 Opncion 4 (Reporte Estadistico): esta opci�n muestra a nivel de pantalla, un listado que contiene la informaci�n relacionada con los servicios de alquiler que se realizan en cada area. Recuerde que debe ralizar todas las Validaciones. A continuaci�n un Ejemplo del Reporte.
 Reporte Estadistico por los Servicios de Alquiler
 Que ser realizaron en cada Area

 		Descripcion del Area	Monto Total Ingresado
 			Piscina						1500.00
            Mezzanina					2000.00
            Restaurant					1800.00
            Parque Infantil				1500.00
            Cancha de Tenis				 0.00
            Cancha de Bolas				 0.00
            Churuata					 0.00
*/


#include "Controlador.h"

int main()
{  int opc;
   VGeneral  vg;
   Controlador c;
   do
   { vg.Limpiar();
     vg.ImprimirLineasBlanco(3);
     vg.ImprimirEncabezado("   M E N U  O P C I O N E S","   =======  ===============\n\n");
     vg.ImprimirMensaje("   1. Registrar inf. de las areas\n");
     vg.ImprimirMensaje("   2. Registrar inf. de servicios de alquileres\n" );
     vg.ImprimirMensaje("   3. Procesar alquileres\n" );
     vg.ImprimirMensaje("   4. Reporte Estadistico\n");
     vg.ImprimirMensaje("   5. Salir\n\n");
     opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,5);
     switch (opc)
     {
      case 1: c.RegistrarAreas();
              break;
      case 2: c.RegistrarServiciosAlquler();
              break;
      case 3: c.ProcesarAlquileres();
              break;
      case 4: c.ReporteEstadistico();
              break;
     }
   } while(opc != 5);
   return 0;
}

