/*
 * Vendedor.h
 * **********************************************************************************************************************************************************
 *se Declara la clase Principal Vendedor.h , este archivo contiene la declaracion  (de la constante MAX, tama�o m�ximo del arreglo, del Arreglo A_Ventas y
 *se del Puntero del arreglo)
  *y de los m{etodos o funciones de las que consta el m�dulo, asi como la llamadas al  archivo de encabezado que necesita: Venta.h
 **********************************************************************************************************************************************************
 *
 *  Created on: 04/07/2012
 *      Author: Pedro Gabriel Leal
 *
 */

#ifndef VENDEDOR_H_
#define VENDEDOR_H_

#include "Venta.h"

int const MAX = 4;

class Vendedor
{
private:
	Venta A_Ventas[MAX];
	int ptr;

public:
	Vendedor();                        // Inicializa el puntero en 0
	void setPtr(int elPtr);           // Asigna un valor al puntero ptr
	int getPtr();                    // Lee el puntero ptr
	bool setVenta(Venta laVenta);   // Carga el arreglo Venta
	Venta getVenta (int i);        // Lee el Arreglo en una posici�n determinada
	float promediar();            //Calcula y Retorna el Promedio de las ventas
	Venta mayorVenta();          // Determina cual es el mayor monto de Venta y Retorna el arreglo en la posici�n donde esta ese mayor monto de venta
	int cantVMP();			    //Calcula y Retorna la cantidad de ventas mayor al promedio
	int cantVIM();			   //Calcula y Retorna la cantidad de ventas igual al mayor vendido

};

#endif /* VENDEDOR_H_ */
