/*
 * Vuelos.h
 *
 *  Created on: 22/06/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef VUELOS_H_
#define VUELOS_H_
#include <string>

using namespace std;

class Vuelos
{
private:
	string numVuelo;
	char tipoVuelo;
	float costoPasaje;
	int numPasajeros;
public:
	Vuelos();
	void setNumVuelo (string elNumV);
	string getNumVuelo ();
	void setTipoVuelo (char elTipoV);
	char getTipoVuelo ();
	void setCostoPasaje (float elCostoP);
	float getCostoPasaje ();
	void setNumPasajeros (int elNumPj);
	int getNumPasajeros ();
	float calcularIngreso ();
	string determinarCondicion(Vuelos losVl);
};

#endif /* VUELOS_H_ */
