/*
 * Empleado.h
 *
 *  Created on: 25/02/2013
 *  Author: Gabriel Leal
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_
#include <string>
using namespace std;

class Empleado
{
private:
	string Cedula;
	string TipoE;
	float Sueldo;
public:
	Empleado();
	void InicializarE();
	void setCedula(string laCedula);
	string getCedula();
	void setTipoE(string elTipo);
	string getTipoE();
	void setSueldo(float elSueldo);
	float getSueldo();
};

#endif /* EMPLEADO_H_ */
