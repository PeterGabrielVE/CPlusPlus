/*
 * MEmpresa.h
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MEMPRESA_H_
#define MEMPRESA_H_
#include "MEmpleado.h"

class MEmpresa
{
	private:
	int ct,cbe;
public:
	MEmpresa();
	void SetCt(int c);
	int GetCt();
	void setCbe(int cb);
	int getCbe();
	// Relaci�n uso
	void ProcesarEmpleado(MEmpleado memp);
};

#endif /* MEMPRESA_H_ */
