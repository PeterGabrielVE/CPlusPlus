/*
 * MCliente.h
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#ifndef MCLIENTE_H_
#define MCLIENTE_H_

class MCliente
{
private:
	long Cedula;
	int CantDias;
	int TipoHospedaje;
public:
	MCliente();
	void setCedula(long c);
	void setCantDias(int cd);
	void setTipoHospedaje(int th);
	long getCedula();
	int getCantDias();
    int getTipoHospedaje();
	float CalcMontoACancelar();
};

#endif /* MCLIENTE_H_ */
