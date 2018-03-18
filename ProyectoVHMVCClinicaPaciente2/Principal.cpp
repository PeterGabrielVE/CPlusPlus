/*
 * MPrincipal.cpp
 *
 *  Created on: 27/01/2014
 *      Author: Pedro Gabriel Leal
 *
 *
 *      PLANTEAMIENTO:
          En una conocida cl�nica de la ciudad, a fin de medir ciertas frecuencias, se dispuso de
	      un computador en la oficina de informaci�n que recolectara los siguientes datos
	      relacionados con los pacientes:

	      C�dula, Nombre, Motivo de la visita (1. Consulta, 2.Hospitalizaci�n),
	      Turno (1. Matutino, 2. Vespertino) y Monto cancelado.

	    REQUERIMIENTOS:

	    Se necesita que el programa sea elaborado usando men� de opciones y adem�s
	    permita:

         1. Procesar pacientes. En esta opci�n se  debe almacenar la informaci�n de los
              pacientes.

         2. Consulta por turno. En esta opci�n, dado un turno (1. Matutino, 2. Vespertino)
              se debe mostrar el n�mero de pacientes atendidos. El turno es un dato que
              debe leerse para que esta opci�n pueda ser ejecutada.

         3. Estad�stica cl�nica. Esta opci�n debe mostrar el monto total que recolect� la
              cl�nica por hospitalizaci�n y consulta.

         4. Listado pacientes por consulta. En esta opci�n se debe imprimir las c�dulas de
              los pacientes que asistieron a la cl�nica por consulta
              que cancelaron el mayor monto.

         5. Salir

         Extras:
         ahora tambien se maneja el dato dia (1Lunes.2 Martes...7Domingo) en que se realizo la visita
         y se necesita conocer para el fin de semana, cual turno (vespertino o matutino) fue el mas visitado.
 *
 *
 *
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
		vg.ImprimirLineasBlanco(5);
		vg.ImprimirMensaje("\t\t\t\tMenu de opciones\n\n");
		vg.ImprimirMensaje("\t\t\t1.Cargar informacion de los pacientes\n");
		vg.ImprimirMensaje("\t\t\t2.Consulta por Turno\n");
		vg.ImprimirMensaje("\t\t\t3.Estadisticas\n");
		vg.ImprimirMensaje("\t\t\t4.listado Pacientes por consulta\n");
		vg.ImprimirMensaje("\t\t\t5.Salir\n");
		opcion=vg.LeerValidarNro("\t\t\tseleccion opcion[1..5]:",1,5);
		switch(opcion)
		{
		case 1: c.ProcesarInfoPacientes();

			break;

		case 2: c.MostrarConsultaTurno();
			    break;

	    case 3: c.MostrarEstadisticas();
			    break;

	    case 4: c.MostrarListado();
	    	    break;

		}
	}while(opcion!=5);
	return 0;
}



