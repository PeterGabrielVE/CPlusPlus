/*
 * VSpa.h
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef VSPA_H_
#define VSPA_H_
#include "VGeneral.h"
#include <vector>

class VSpa : public VGeneral{
public:
	VSpa();
	void ImprimirReporte(vector<string> , vector<float> , float montototspa);
};

#endif /* VSPA_H_ */
