/*
 * Postres.h
 *
 *  Created on: 23/02/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef POSTRES_H_
#define POSTRES_H_
#include<string>
using namespace std;

class Postres
{
private:
	string Nombre;
	int CantAzucar, CantCacao,CantMant,CantRaciones;

public:
	Postres();
	void setNombre(string Nom);
	string getNombre();
	void setCantAzucar(int Azucar);
	int getCantAzucar();
	void setCantCacao(int Cacao);
	int getCantCacao();
	void setCantMant(int Mant);
	int getCantMant();
	void setCantRaciones(int Raciones);
	int getCantRaciones();
};

#endif /* POSTRES_H_ */
