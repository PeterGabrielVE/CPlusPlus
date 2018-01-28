/*
 * Polizas.h
 *
 *  Created on: 07/03/2013
 *      Author: Gabriel
 */

#ifndef POLIZAS_H_
#define POLIZAS_H_

#include <string>
using namespace std;

class Polizas
{
private:
	string Nombre;
	string Cedula;
	int CantPolizaV;
	char TipoP;
	float MontoHCM,MontoVida;
public:
	Polizas();
	void setCedula(string laCedula);
	string getCedula();
	void setNombre(string elNombre);
	string getNombre();
	void setTipoP(char elTipo);
	char getTipoP();
	void setCantPolizaV(int laCantPV);
	int getCantPolizaV();
	void setMontoHCM(float elMontoHCM);
	float getMontoHCM();
	float CalcMontoVida();
	float CalComision();
	float CalcMontoTotal();
    float DetBonificacion();

};

#endif /* POLIZAS_H_ */
