/*
 * VSuscriptor.h
 *
 *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef VSUSCRIPTOR_H_
#define VSUSCRIPTOR_H_

#include <iostream>
#include <iomanip>
#include "VGeneral.h"
using namespace std;

class VSuscriptor : public VGeneral{
   public:
/* Los m�todos de lectura por cada
   atributo se toman de la VGeneral */
	VSuscriptor();
      void ImprimirSuscriptor (string, float, float);

};



#endif /* VSUSCRIPTOR_H_ */
