/*
 * PRINCPIPAL.CPP
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 *
 *
 *       PLANTEAMIENTO:
Una l�nea de autobuses ubicada en el terminal de pasajeros de la ciudad de Barquisimeto,
requiere un programa que le permita llevar el control de los pasajeros que viajan
en sus autobuses hacia otras ciudades del pa�s.
Para ello, la l�nea dio a conocer que solo ofrece viajes a tres ciudades cercanas,
las cuales identifica con un n�mero de la siguiente manera: 1. Valencia, 2. Maracay y 3. Caracas,
 y esos viajes solo se realizan en horas del d�a, de tal forma que habr� viajes
 en el turno de la ma�ana y en el turno de la tarde.
Adicional a esto, inform� que los precios actuales son:
Para Valencia 100,00 BsF. Maracay 150,00 BsF. y Caracas 200,00 BsF.
Por otro lado, la l�nea otorga descuentos a los pasajeros de la tercera edad,
este descuento es del 15% del precio del pasaje; tambi�n indic� que las mujeres
que tengan 55 a�os o m�s y los hombres con 60 a�os o m�s son considerados personas de la tercera edad
y por lo tanto disfrutar�n del descuento.
Para lograr el control solicitado por la l�nea, se debe tener el detalle de cada viaje,
con todos los pasajeros que viajaron en el mismo; por lo tanto, la l�nea registra por cada viaje,
el nro. de placa del autob�s,
la ciudad destino,
hora de salida (hora militar)
y la cantidad de pasajeros que transport�
y a su vez por cada pasajero registra el nro. de c�dula, edad y sexo (1. Femenino, 2. Masculino).
Es importante para la l�nea, tener el detalle del monto total en BsF. generado por cada viaje,
identificando la placa del autob�s y el turno en el que se realiz� el viaje.
Los turnos dependen de la hora del viaje como se muestra a continuaci�n:

Turno           Hora
Ma�ana       <=12
Tarde            > 12 y <=18

El gerente de la l�nea requiere saber,
el total de viajes realizados hacia la ciudad de Caracas,
y adem�s, considerando los turnos (ma�ana y tarde) en cual obtuvo menores ingresos.


 *
 *
 */


#include "Controlador.h"

int main()
{
	Controlador c;
	c.ProcesarLinea();
	return 0;

}
