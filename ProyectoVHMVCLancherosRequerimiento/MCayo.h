/*
 * MCayo.h
 *
 *  Created on: 05/02/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MCAYO_H_
#define MCAYO_H_
#include "MArticulo.h"
class MCayo :public MArticulo{
private:
	float acumgingresos;
public:
	MCayo();
	void SetAcumgingresos(float acumgingresos);
	float GetAcumgingresos();
	void Actualizar(float ganasoc);
	;
};

#endif /* MCAYO_H_ */
