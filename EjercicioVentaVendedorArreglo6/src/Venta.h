/*
 * Venta.h
 *
 ** Se Declara la clase menor Venta.h , este archivo contiene la declaracion  del atributo monto y de los m�todos
 **********************************************************************************************************************************************************
 *
 *  Created on: 04/07/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef VENTA_H_
#define VENTA_H_

class Venta
{
private:
	float monto;
public:
	Venta();                         // Inicializa el monto en 0
	void setMonto(float elMonto);    // Asigna un valor al atributo monto
	float getMonto();                //Lee el monto
};

#endif /* VENTA_H_ */
