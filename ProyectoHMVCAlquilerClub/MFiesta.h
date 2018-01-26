/*
 * MFiesta.h
 *
 *  Created on: 23/11/2013
 *  Author:Pedro Gabriel Leal
 */

#ifndef MFIESTA_H_
#define MFIESTA_H_
#include "MEvento.h"
class MFiesta :public MEvento {
private:
	 int cantmesas;
	 int cantsillas;
	 int tipofiesta;
public:
	MFiesta();
	int GetCantmesas() const;
	void SetCantmesas(int cantmesas);
	int GetCantsillas() const;
	void SetCantsillas(int cantsillas);
	int GetTipofiesta() const;
	void SetTipofiesta(int tipofiesta);
	float CalcularMontoSillasyMesas();
	float CalcularDesctoaSocio();
	float CalcularMontoaPagar();
};

#endif /* MFIESTA_H_ */
