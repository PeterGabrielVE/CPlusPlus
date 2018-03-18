/*
 *  Principal.cpp
 *
 *  Created on: 02/02/2014
 *      Author: Pedro Gabriel Leal
 *
 *
 *      Enunciado ejercicio nro 7 Guia Vectores
 *
 *       7) Un prestigioso Hotel cinco estrellas, requiere procesar la informaci�n relacionada con
			los servicios que presta a sus clientes, con el prop�sito de generar cierta informaci�n.
			Entre los tipos de servicios que se ofrecen se encuentran: 1->Habitaci�n, 2-
			>Desayunos, 3->Almuerzos, 4->Cenas, 5->Business Centre, 6-> Salones, 7->Casino, 8-
			>Spa, 9->Alquiler Veh�culo.
			Elabore un programa usando POO, MVC y MEN� DE OPCIONES, que permita:
			a) Procesar la informaci�n relacionada con los servicios que se prestaron en
			cada uno de los d�as de la semana.

			CONSIDERACIONES IMPORTANTES:
			Los datos vienen clasificados por cada d�a de la semana, es decir, al momento
			de procesar la informaci�n se tienen los servicios prestados de un d�a
			completo, luego los servicios del otro d�a y as� sucesivamente, sin embargo,
			cuando se est�n procesando los servicios de un d�a, esta informaci�n no se
			encuentra clasificada.
			Por cada servicio que se procesa se conoce el tipo de servicio (1..9) y el monto
			del mismo.
			En un d�a pueden haber varios servicios del mismo tipo.
			No necesariamente para en un d�a, hay todos los tipos de servicio.
			b) Generar un reporte que contenga por cada d�a de la semana el total de los
			ingresos, adem�s del total de los ingresos en toda la semana y el porcentaje
			que representa el total de los ingresos por cada servicio con respecto al
			total ingresado.
			c) Dado un servicio, mostrar los d�as en los que no hubo ning�n ingreso.

 *
 *
 */



#include "Controlador.h"

int main()
{
	Controlador c;
	VGeneral vg;
	int opcion;
	do
	{
		vg.Limpiar();
		vg.ImprimirMensaje("\n\n Menu de opciones ");
		vg.ImprimirMensaje("\n 1) Procesar Servicios de los dias");
		vg.ImprimirMensaje("\n 2) Reportes");
		vg.ImprimirMensaje("\n 3) Consultas");
		vg.ImprimirMensaje("\n 4) Salir");
		opcion=vg.LeerValidarNro("\n\nSELECCIONE LA OPCION 1-4.:",1,4);
		switch(opcion)
		{
			case 1:
				     c.ProcesarDia();
			         break;

			case 2:  c.Reporte();
				     break;
			case 3 : c.ConsultarServicio();
        		     break;
		}
	}while (opcion!=4);
      return 0;
	}
