/*
 * MViaje.cpp
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MViaje.h"

MViaje::MViaje() {
	acumdscto = 0;/*no es necesario inicializar aqui, porque la clase mediana,
	                siempre se inicializa en el controlador, haciando uso de los metodos set.
	                como efectivamente hicimos,
	                peeeroooo... Algunos profesores lo hacen. revisen sus apuntes,
	                porq siempre es bueno trabajar en un examen como lo hacen los profesores,
	                :(
	                 en definitiva, ellos son los que corrigen.

	                */
}

//set
void MViaje::SetPlaca(string p)
{
     placa = p;
}

void MViaje::SetCiudad(int c)
{
     ciudad = c;
}

void MViaje::SetHoraSalida(int hs)
{
     hora_salida = hs;
}

void MViaje::SetCantPasajeros(int cp)
{
     cant_pasajeros = cp;
}

void MViaje::SetAcumdscto(float acd)
{
     acumdscto = acd;
}

//get
string MViaje::GetPlaca()
{
    return placa;
}

int MViaje::GetCiudad()
{
    return ciudad;
}


int MViaje::GetHoraSalida(){

    return hora_salida;
}

int MViaje::GetCantPasajeros()
{
    return cant_pasajeros;
}

float MViaje::GetAcumdscto()
{
    return acumdscto;
}


//metodos de calculos
//aqui calculamos el precio del pasaje del viaje, el cual depende del la ciudad destino
float MViaje::CalcPrecio() {
 float precio;
	switch(ciudad)
	{
	case 1: precio=100;
	break;
	case 2: precio=150;
	break;
	case 3: precio=200;
	break;
	}
	return precio;
}


/*aqui se calcula el descuento otorgado a cada pasajero de la tercera edad....
el cual es de un 15% sobre el precio del pasaje. */
float MViaje::CalcDscto(MPasajeros mps)
{
	float dscto;

    if((mps.GetSexo()==1 and mps.GetEdad()>=55) or (mps.GetSexo()== 2 and mps.GetEdad()>=60))

		dscto = CalcPrecio() *0.15;
	   else dscto=0;

	return dscto;
}

// aqui acumlamos el descuento otorgado a al pasajero de la tercera edad, si es que aplica.
void MViaje::ProcesarPasajeros(MPasajeros mps)
{

	acumdscto+= CalcDscto(mps);

}


/* aqui calculamos el monto total del viaje(salida deseada), que es el ingreso del viaje
 * el cual se obtiene al restar el monto bruto del viaje (monto viaje=cant. pasajeros * precio) -
 * el acumulador de todos los descuentos otorgados a los pasajeros de la tercera edad.
 */
float MViaje::CalcMontoTotViaje()
{
  float montoviaje= cant_pasajeros* CalcPrecio();

  return montoviaje -acumdscto;

}

// aqui calculamos el turno del viaje,haciend una sentencia selectiva con la hora de salida.
string MViaje::DetTurno()
{
	if(hora_salida <= 12)
		return "Ma�ana";
	else
		return "tarde";

}
