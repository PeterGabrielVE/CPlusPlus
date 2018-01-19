/*
 * Vendedor.h
 * **********************************************************************************************************************************************************

 *  Created on: 14/07/2012
 *      Author: Pedro Leal
 */

#ifndef VENDEDOR_H_
#define VENDEDOR_H_

#include "Venta.h"

int const MAX = 5;

class Vendedor
{
private:
	Venta AVentas[MAX];
	int ptr;

public:
	Vendedor();                        // Inicializa el puntero en 0
	void setPtr(int elPtr);           // Asigna un valor al puntero ptr
	int getPtr();                    // Lee el puntero ptr
	bool setVenta(Venta laVenta);   // Carga el arreglo Venta
	Venta getVenta (int i);        // Lee el Arreglo en una posición determinada
	float promediar();            //Calcula y Retorna el Promedio de las ventas
	Venta mayorVenta();          // Determina cual es el mayor monto de Venta y Retorna el arreglo en la posición donde esta ese mayor monto de venta
	int cantVMP();			    //Calcula y Retorna la cantidad de ventas mayor al promedio
	int cantVIM();			   //Calcula y Retorna la cantidad de ventas igual al mayor vendido
    Venta menorVenta();
    int cantVCP();
};

#endif /* VENDEDOR_H_ */
