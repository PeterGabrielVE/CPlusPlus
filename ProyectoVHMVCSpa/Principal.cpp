/*
 * Principal.cpp
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 *
 *PLANTEAMIENTO:
La empresa AMANON SPA se encuentra ubicada en la zona Este de Barquisimeto y se encarga de tratar
el cuerpo, la mente y el espíritu como un todo, para alcanzar la armonía, el equilibrio y el bienestar
entre ellos. Esto se logra a través de una diversidad de tratamientos (tratamientos corporales,
tratamientos faciales, tratamientos combinados, etc) y cada uno está compuesto de varias terapias.
En este momento dicha empresa necesita que se procesen las terapias que fueron aplicadas durante la
semana, de tal manera que se pueda generar ciertas estadísticas y para ello el gerente suministra la
siguiente información.

Actualmente, la empresa tiene registrada por cada terapia los siguientes datos: código (dato de tipo
string), descripción (Masaje Corporal, Masaje Relajante, Depilación, Mesoterapia, etc), precio y tipo de
tratamiento al que pertenece la misma (dato de tipo entero).

La empresa por los momentos solo trabaja con determinados tipos tratamientos y por cada uno
maneja la siguiente información: Tipo de tratamiento (nro. del 1 al 6), descripción y un estatus que
indica si el tratamiento está en promoción; para manejar ésta última información, se considera que si
el status toma el valor de 1  el tratamiento está en promoción y si toma el valor de 0  no lo está.
En la siguiente tabla se muestra la respectiva información.

Tipo Descripción del Tratamiento      Promoción
1    Tratamiento de Balneoterapia         1
2 	 Tratamientos Corporales              1
3 	 Tratamientos Faciales                1
4	 Estética Profesional                 0
5 	 Amanon para Caballeros               0
6 	 Tratamientos Combinados              1

Es importante resaltar que el precio de la terapia tendrá un descuento del 10%, si pertenece a algún
tratamiento de los que está en promoción.
Elabore un programa usando POO, MVC, Herencia y Vectores que presente un MENÚ con las
siguientes opciones:
1. Registrar información de los tratamientos del Spa
2. Registrar información de las terapias.
3. Procesar Servicios Prestados.
4. Reporte Estadístico.
5. Finalizar.

Opción 1. (Registrar información de los tratamientos del Spa): Esta opción permite que se cargue
por teclado, la información de los tipos de tratamientos ofrecidos por el Spa.

Opción 2. (Registrar información de las terapias): Esta opción permite que se cargue por teclado, la
información de las terapias que son ofrecidas por el Spa.

Opción 3. (Procesar Servicios Prestados): Esta opción permite procesar la información de cada una
de las terapias que fueron realizadas durante la semana, para ello debe leer por el teclado el código
de la terapia y realizar los respectivos procesos que permitirán generar los requerimientos
solicitados. Recuerde que debe realizar todas las validaciones.

Opción 4. (Reporte Estadístico): Esta opción muestra a nivel de pantalla, un listado que contiene
información relacionada con las terapias aplicadas en cada tratamiento. Recuerde que debe
realizar las respectivas validaciones. A continuación se muestra un ejemplo del reporte

REPORTE ESTADÍSTICO POR LAS TERAPIAS APLICADAS A CADA CLIENTE
CEDULA                MONTO A PAGAR
XXXXXX                    XXXX
XXXXXX                    XXXX
..                        ...
..                         ...
XXXXX                     XXX

Monto Total Ingresado al SPA por terapias realizadas: xxx

Opción 5. (Finalizar)
 *
 *
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
     vg.ImprimirMensaje("   1. Registrar inf. de los Tratamientos\n");
     vg.ImprimirMensaje("   2. Registrar inf.Terapias\n" );
     vg.ImprimirMensaje("   3. Procesar Terapias a los Clientes\n" );
     vg.ImprimirMensaje("   4. Reporte Estadistico\n");
     vg.ImprimirMensaje("   5. Salir\n\n");
     opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,5);
     switch (opc)
     {
      case 1: c.RegistrarTratamientos();
              break;
      case 2: c.RegistrarTerapias();
              break;
      case 3: c.ProcesarTerapiasClientes();
              break;
      case 4: c.Reporte();
              break;
     }
   } while(opc != 5);
   return 0;
}
