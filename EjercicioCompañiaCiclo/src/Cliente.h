/*
 * Cliente.h
 *
 *  Created on: 23/02/2013
 *      Author: Gabriel
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>

using namespace std;

class Cliente
{
private:
	    long Cedula;
	    float ValorI, ValorF, CantMax;
public:
	Cliente();
	void setCedula (long laCedula);
	long getCedula ();
	void setValorI (float elValorI);
	float getValorI ();
	void setValorF (float elValorF);
	float getValorF ();
	void setCantMax (float laCantM);
	float getCantMax ();
};

#endif /* CLIENTE_H_ */
