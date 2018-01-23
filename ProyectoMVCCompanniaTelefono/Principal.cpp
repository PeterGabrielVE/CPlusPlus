/*
 * Principal.cpp
 *
 *  Created on: 03/07/2013
 *      Author: Pedro Gabriel Leal
 *
 *      8.	Una Compañía que alquila teléfonos desea un reporte estadístico diario. Por cada llamada se conoce el tipo de llamada (1-> local, 2-> internacional, 3-> celular) y duración de la llamada (en minutos). Para calcular el monto de cada llamada considere la siguiente tabla:
Tipo de llamada		Monto Bs.F/min
Local				0.06
Internacional			0.50
Celular				0.30
Por otra parte se conoce de la Compañía su Nombre Dirección y RIF
El reporte que se requiere es el siguiente:
Compañía xxxx
RIF: xxxx
Dirección: xxxxxx
Reporte Diario de Bs. cobrados en llamadas
Tipo de llamada		Total de llamadas        Monto total en Bs.F
Local			    	  xxx			          xxxx
Internacional			  xxx			          xxxx
Celular			    	  xxx			          xxxx

Monto Total en Bs.F diarios : xxxx
Tipo de llamada con mayor frecuencia : xxxxxx
 *
 */



#include "Controlador.h"
int main()
{
	Controlador c;
	c.ProcesarCompania();
	c.Reporte();
	return 0;
}
