/*
 * VTienda.h
 *
 *  Created on: 2/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef VTIENDA_H_
#define VTIENDA_H_
#include "VGeneral.h"
class VTienda : public VGeneral{
public:
	VTienda();
	void ImprimirTienda(float gananciatotal, float porcinter,string tipomayor,
			/*Req 1->*/ float menorcostonetodig,
			/*Req 2->*/ float menorcostoneto,
			/*Req 3->*/ float prompneto40,
			/*Req 4->*/ float mayorprecD,
			/*Req 4->*/ string titulomayD,
			/*Req 4->*/ string autormayD);
};

#endif /* VTIENDA_H_ */
