/*
 * MLanchero.h
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
 */

#ifndef MLANCHERO_H_
#define MLANCHERO_H_
#include "MPersona.h"
#include "MTraslado.h"

class MLanchero:public MPersona
{
private:
	 int canttraslados;
	 float acumganancia;
public:
	MLanchero();
	void Actualizar(float ganl);

	void SetAcumganancia(float acumgan);
	float GetAcumganancia();

	void SetCanttraslados(int cantt);
	int GetCanttraslados() ;

};

#endif /* MLANCHERO_H_ */
