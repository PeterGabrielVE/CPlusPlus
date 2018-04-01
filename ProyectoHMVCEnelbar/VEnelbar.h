 /*
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef VENELBAR_H_
#define VENELBAR_H_


#include <iostream>
#include <iomanip>
#include <vector>
#include "VGeneral.h"
using namespace std;

class VEnelbar : public VGeneral {
   public:
/* Los m�todos de lectura por cada
   atributo se toman de la VGeneral */
	VEnelbar();
      void ImprimirENELBAR (float, float, int, float, float, vector<string> cod, vector<int> imp);
};

#endif /* VENELBAR_H_ */
