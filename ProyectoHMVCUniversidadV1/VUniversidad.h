/*
 * VUniversidad.h
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef VUNIVERSIDAD_H_
#define VUNIVERSIDAD_H_

#include "VGeneral.h"
class VUniversidad: public VGeneral
{   public:
       VUniversidad();
       void ImprimirUniv(int ctdoct, int ctcontra, float totbonoh);
 };
#endif /* VUNIVERSIDAD_H_ */
