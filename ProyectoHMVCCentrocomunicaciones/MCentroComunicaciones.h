/*
 * MCentroComunicaciones.h
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

/* Nos piden como salida el monto total recaudado por el centro de comunicaciones
 * asi que lo que haremos sera declarar un acumulador(acumrecaudado)
 * y haremos "dos procesar", de tal manera que cuando se procese un telefono fijo,
 * dicho monto a pagar se lo acumulamos alli,
 * de igual manera haremos cada vez que se procese un telefono celular,
 * le acumulamnos el monto pagado,
 * asi finalmente tendremos el monto total recudado por el centro de comunicaciones
 */


#ifndef MCENTROCOMUNICACIONES_H_
#define MCENTROCOMUNICACIONES_H_
#include "MFijo.h"
#include "MCelular.h"

class MCentroComunicaciones {

private:
float acumrecaudado;

public:
	MCentroComunicaciones();
    void SetAcumrecaudado(float acumr);
    float GetAcumrecaudado();
    void ProcesarFijo(MFijo mf);
    void ProcesarCelular(MCelular mc);
};


#endif /* MCENTROCOMUNICACIONES_H_ */
