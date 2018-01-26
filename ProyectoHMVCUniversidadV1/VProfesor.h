/*
 * VProfesor.h
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef VPROFESOR_H_
#define VPROFESOR_H_
#include "VGeneral.h"
class VProfesor: public VGeneral
{   public:
       VProfesor();
       void ImprimirProfesor(string ced,string nombre,string categoria, float sneto);
 };
#endif /* VPROFESOR_H_ */
