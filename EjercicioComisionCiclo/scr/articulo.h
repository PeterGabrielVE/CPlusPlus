/*
 * articulo.h
 *
 *  Created on: 29/05/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef ARTICULO_H_
#define ARTICULO_H_

class articulo {
private:
	float PrecioA, acumVenta,acumComision,acumpromVmayor8;
    int contArtV5,contArtV5y8,contArtV8,contpromVmayor8;
public:
	articulo();
	void inicializar();

	void asignarPrecioA(float PA);
	float obtenerPrecioA();
	int obtenercontArtV5();
	int obtenercontArtV5y8();
	int obtenercontArtV8();
	float obtenercontpromedioV();
	float obteneracumVenta();
	float obteneracumComision();
	float obtenerpromVmayores8();
	void contarArtV5();
	void contarArtV5y8();
	void contarArtV8();
	void acumularVenta();
	void acumularComision();
	float calComision();
	float calpromV();
	float calpromVmayor8();
};

#endif /* ARTICULO_H_ */
