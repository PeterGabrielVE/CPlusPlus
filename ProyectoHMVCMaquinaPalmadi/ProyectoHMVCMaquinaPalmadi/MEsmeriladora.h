/*
 * MEsmeriladora.h
 *
 *  Created on: 22/05/2012
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
    float CalcMontoFinalE();
};

#endif /* MESMERILADORA_H_ */
