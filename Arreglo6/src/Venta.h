/*
 * Venta.h
 *
 ** Se Declara la clase menor Venta.h , este archivo contiene la declaracion  del atributo monto y de los métodos
 **********************************************************************************************************************************************************
 *
 *  Created on: 14/07/2012
 *      Author: Pedro Leal
 */

#ifndef VENTA_H_
#define VENTA_H_

class Venta
{
private:
	float monto;
	char tipoVenta;
public:
	Venta();                         // Inicializa el monto en 0
	void setMonto(float elMonto);    // Asigna un valor al atributo monto
	float getMonto();                //Lee el monto
	void setTipoVenta(char elTipoVenta);
	char getTipoVenta();
};

#endif /* VENTA_H_ */
