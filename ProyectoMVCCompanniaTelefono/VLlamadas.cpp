/*
 * VLlamadas.cpp
 *
 *  Created on: 03/07/2013
 *      Author: lismary
 */

#include "VLlamadas.h"

VLlamadas::VLlamadas() {
	// TODO Auto-generated constructor stub

}

int VLlamadas::leertipollamada()
{
	int tl;
	do
	{
	cout<<"Tipo de llamada [1]Local [2] Internacional [3]Celular: ";
	cin>> tl;

	if( tl < 1 or tl > 3)
    cout<<"Dato no valido";
	}
	while ( tl < 1 or tl > 3);
		return tl;
}

float VLlamadas::leerduracion()
{
	float min;
	do
	{
		cout<<"Duración de la llamada en minutos: ";
		cin>>min;
		if(min < 0)
			cout<<"dato no valido";
	}
	while(min<0);
	return min;
	}



