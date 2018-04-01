/*
 * MCliente.h
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MCLIENTE_H_
#define MCLIENTE_H_
#include "MPersona.h"

class MCliente : public MPersona {
private:
	int cantterapias;
	float acummonto;
public:
	MCliente();

	void SetCantTerapias(int cantterap);
	int GetCantTerapias();
	void SetAcummonto(float acumm);
	float GetAcummonto();

	void Actualizar(float montoapagar);

};

#endif /* MCLIENTE_H_ */
