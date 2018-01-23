/*
 * MViaje.h
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MVIAJE_H_
#define MVIAJE_H_
/*#include <string> no hace falta porq ya esta incluida en Mpsajeros
 *
 *y como aqui se incluye Mpasajeros, puede ser usada el string*/

#include "MPasajeros.h"

using namespace std;

class MViaje {

private:
	string placa;
	int cant_pasajeros;
	int hora_salida;
	int ciudad;
	float acumdscto;

public:
	MViaje();

	void SetCantPasajeros(int cp);
	int GetCantPasajeros();

	void SetHoraSalida(int hs);
	int GetHoraSalida();

	void SetCiudad(int c);
	int GetCiudad();

	void SetPlaca(string p);
	string GetPlaca();

	void SetAcumdscto(float acd);
	float GetAcumdscto();

	float CalcPrecio();
	float CalcDscto(MPasajeros);
	void ProcesarPasajeros(MPasajeros);
	float CalcMontoTotViaje();
	string DetTurno();
};

#endif /* MVIAJE_H_ */
