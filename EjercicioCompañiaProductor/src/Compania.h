/*
 * Compania.h
 *
 *  Created on: 04/03/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef COMPANIA_H_
#define COMPANIA_H_
#include "Productor.h"

class Compania {
private:
	Productor A_Prod[20];
	int CantPolVid, ptr, Tamano;
	int ContProdBono; //Cantidad de productores que recibieron bonificaci�n
	float AcumMontoC;
	int contarP;//cuanta los productores con mayor de 18000


public:
	Compania();

	bool CargarProduc(Productor elProd);
	Productor SacarProduc (int laPos);

	void CalCantPolVid (Productor elProd);
	int getCantPolVida();

	void CalAcumMontoC ();
	float getAcumMontoC();

	int getptr();
	int getTamano();

	void setContProdBono (Productor elProd);
	int getContProdBono ();

	void OrdenarProd();

	float CalcMontoPromedio (); //calcula el monto promedio que se pago

	float CalcMontoVentas (Productor elProd);

	float CalcBono (Productor elProd);
	float CalComision(Productor elProd);

	float CalcPorcBono ();

	float CalCantVid (Productor elProd);

	float CalcMontoPagar (Productor elProd);

	void setcontProductores();
	int getcontproductores();

	float calcularPoercentaje();
};

#endif /* COMPANIA_H_ */
