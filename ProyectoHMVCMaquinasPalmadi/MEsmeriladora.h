/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MESMERILADORA_H_
#define MESMERILADORA_H_
#include "MHerramienta.h"
class MEsmeriladora :public MHerramienta{
public:

	MEsmeriladora();
    float CalcMontoDiscos();
    float CalcMontoFinalAlquiler();
    float CalcIva();
};

#endif /* MESMERILADORA_H_ */
