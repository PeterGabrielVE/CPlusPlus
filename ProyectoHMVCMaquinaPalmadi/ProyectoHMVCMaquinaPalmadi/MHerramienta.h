/*
 * MHerramientas.h
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MHERRAMIENTA_H_
#define MHERRAMIENTA_H_
#include "MArticulo.h"
class MHerramienta :public MArticulo{
private:
	int diasalguiler;
public:
	MHerramienta();
    void SetDiasalguiler(int diasa);
    int GetDiasalguiler() ;
    float CalcMontoAlquiler();
};

#endif /* MHERRAMIENTAS_H_ */
//C�digo, descripci�n, tipo de herramienta ( 1 al 3), precio del alquiler diario y d�as de alquiler.
