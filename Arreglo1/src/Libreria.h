/*
 * Libreria.h
 *
 *  Created on: 10/07/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef LIBRERIA_H_
#define LIBRERIA_H_
#include "Venta.h"
const int MAX=3;

class Libreria {
private:
	int ptr;
	Venta AVenta [MAX];
	Venta MayorV;
public:
	Libreria();
	int getPtr();
	void setAVenta(Venta laVenta);
	Venta getAVenta(int i);
	float calPromV();
	void calMayorV(Venta laVenta);
	Venta getMayorV();
};

#endif /* LIBRERIA_H_ */
