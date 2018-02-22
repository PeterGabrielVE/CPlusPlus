/*
 * principal.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */
#include <iostream>
#include <string>
#include <stdlib.h>
#include "persona.h"

using namespace std;

void IEntrada(persona &LaPersona);
void ISalida (persona LaPersona);

int main()
{
	persona LaPersona;
	IEntrada(LaPersona);
    ISalida(LaPersona);
	return 0;
}

void IEntrada (persona &LaPersona)
{
	string N;
	cout <<" Indique nombre : " << endl;
	cin >> N;
	LaPersona.asignarNombre(N);
}

void ISalida (persona LaPersona)
{
	cout << " Bienvenido.. " << LaPersona.obtenerNombre() <<endl;
	system ("pause");
}

