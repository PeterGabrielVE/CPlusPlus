/*
 * MCelular.h
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

/* Esta es una clase muy particular porque nos dan como entrada el monto total pagado
 * (que es lo que usualmente es lo que debemos calcular)
 * y lo que nos piden, dice: "se�alar el monto adicional,conociendo el monto total pagado
 * cuyo calculo es sencillo , solo hay que hacer un despeje...y listo..
 **/


#ifndef MCELULAR_H_
#define MCELULAR_H_
#include "MTelefono.h"
class MCelular  : public MTelefono{
private:
	float montototalpagado;
public:
	MCelular();
	float CalcPagoAdicional();
    float GetMontototalpagado();
    void SetMontototalpagado(float mtp);

};

#endif /* MCELULAR_H_ */
