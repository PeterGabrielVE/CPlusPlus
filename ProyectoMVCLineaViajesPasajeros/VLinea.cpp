/*
 * VLinea.cpp
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VLinea.h"

VLinea::VLinea() {
	// TODO Auto-generated constructor stub

}

void VLinea::ImprimirLinea(int cantviajescaracas, string turnomenoringreso)
{
	system("cls");
	cout<<"INFORMACION DEL VIAJE"<<endl;
	cout<<"========================"<<endl;
	cout<<" El total de viajes realizados hacia la ciudad de Caracas: "<<cantviajescaracas <<endl;
	cout<<" turno en que se obtuvo menores ingresos.: "<<turnomenoringreso <<endl;
	system("pause");
}
