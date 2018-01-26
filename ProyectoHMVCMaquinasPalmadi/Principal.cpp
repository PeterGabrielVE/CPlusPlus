/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal

 *
 *    PLANTEAMIENTO:
M�quinas �Palmadi� es una empresa que se est� iniciando en el mercado del alquiler de herramientas el�ctricas.
Dicha empresa requiere de un sistema que le permita entre otras cosas determinar el monto que deben cancelar
los clientes por dicho servicio.

Se sabe que la empresa por los momentos ofrece el alquiler de las siguientes herramientas:
1. Martillo Demoledor de concreto, 2. Esmeriladora de hierro, 3. Lijadora de madera,
e independientemente del tipo de herramienta a ser alquilada se registra:
C�digo, descripci�n, tipo de herramienta ( 1 al 3), precio del alquiler diario y d�as de alquiler.
Es importante resaltar que el precio del alquiler diario depende del tipo de herramienta,
 como se indica a continuaci�n:

Herramienta	                       Precio alquiler diario BsF
Martillo Demoledor de concreto	            500
Esmeriladora de hierro	                    100
Lijadora de madera	                        290

Cuando la herramienta que se alquila es la Lijadora de Madera,
se registra la cantidad de lijas de banda que compra el cliente para el trabajo que va a realizar;
cada lija tiene un precio de 20 BsF, pero si se compran m�s de tres el precio disminuye en un 12.75%

Para la Esmeriladora de Hierro, el cliente debe llevarse 5 discos abrasivos por cada d�a de alquiler
a un precio de 30 BsF cada uno.
Por ejemplo, si el alquiler es por 3 d�as, debe llevarse 5*3 = 15 discos
y debe cancelar un total de 450 BsF (30 BsF * 15 discos) por concepto de discos abrasivos.

Cuando la herramienta a alquilar es el Martillo Demoledor,
solo se cancela los d�as que cuesta alquilarlo, porque el cincel que �ste utiliza,
ya est� incluido en el precio del alquiler diario.

Es importante resaltar que ninguno de los valores dados anteriormente tiene el IVA (12%) incluido,
 por lo tanto, debe ser calculado cuando ya se tenga el monto final del alquiler
 y adicionado al monto total a cancelar por el cliente.

La informaci�n que la empresa necesita por cada herramienta alquilada, es la siguiente:
c�digo de la herramienta, descripci�n, monto IVA y monto del alquiler;

as� mismo para ella es importante conocer
cu�les fueron las herramientas m�s alquiladas (Martillo Demoledor de concreto, Esmeriladora de hierro o Lijadora de madera)

NOTAS:
 	Los datos de entrada se encuentran grabados en un archivo de texto que mantiene un solo dato en cada l�nea.
 	El programa debe presentar un men� de opciones.
 	El programa debe grabar en un archivo,
 	la siguiente informaci�n de la herramienta que fue alquilada a cada cliente:
 	c�digo, monto IVA y monto del alquiler.

 *

 DATOS DE ENTRADA

  1) Datos de entrada comunes (BASICOS)
     ENUNCIADO: "independientemente del tipo de herramienta a ser alquilada se registra:
                 C�digo, descripci�n, tipo de herramienta ( 1 al 3), precio del alquiler diario y d�as de alquiler."
     ASI QUE ESOS SERAN LOS DATOS BSICOS:
     C�digo,
     descripci�n,
     tipo de herramienta ( 1 al 3),
     precio del alquiler diario
     d�as de alquiler


  2) DATOS DE ENTRADA RELACIONADOS CON LA HERENCIA:

       2.1)  DATOS Martillo Demoledor
               - no hay

       2.2)  DATOS Esmeriladora de Hierro
               - no hay

       2.3)  DATOS Lijadora de Madera
               - cantidad de lijas

    CONSIDERACIONES

        1. Consideraciones Comunes

              Tipo de Herramienta              precio por dia de alquiler
                Martillo Demoledor(1)                    500
                Esmeriladora de Hierro(2)                100
                Lijadora de Madera(3)                    290

        2. Consideraciones RELACIONADOS CON LA HERENCIA:

            2.1)  Martillo Demoledor(1)
               - no hay

            2.2)  Esmeriladora de Hierro(2)
                  - 5 discos abrasivos por cada dia de alquiler a 30 bsf cada uno.
                    monto por discos abrasivos= (5*30) * dias de alquiler

            2.1)  Lijadora de Madera(3)
                 - precio de  cada lija 20 bsf.

                 - Cantidad de lijas    Descto (sobre el precio de la lija)
                      > 3                          12.75%



   SALIDA
           -Por cada herramienta alquilada:

                c�digo de la herramienta,
                descripci�n,
                monto IVA
                monto del alquiler;

           -Por Empresa

                Cu�les fueron las herramientas m�s alquiladas
                   (Martillo Demoledor de concreto, Esmeriladora de hierro o Lijadora de madera)

 */

#include "Controlador.h"
#include "VGeneral.h"

int main()
{

	Controlador c;
	VGeneral vg;
	int opcion;
	bool sw = false;
	do
	{
	  vg.Limpiar();
	  vg.ImprimirLineasBlanco(6);
	  vg.ImprimirMensaje("\t\t\t\tMenu de opciones\n\n");
	  vg.ImprimirMensaje("\t\t\t\t1. Procesar Herramientas\n");
	  vg.ImprimirMensaje("\t\t\t\t2. Estadisticas \n");
	  vg.ImprimirMensaje("\t\t\t\t3. Salir\n");
	  opcion=vg.LeerValidarNro("\n\t\t\t\tSeleccione opcion[1..3]:",1,3);
	  switch(opcion)
	  {
	  case 1:   {
		            c.ProcesarHerramientas();
		            sw= true;
	            }
	            break;

	  case 2:  if (sw)//.....Que es equivalente a la sentencia: if(sw==true)
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

