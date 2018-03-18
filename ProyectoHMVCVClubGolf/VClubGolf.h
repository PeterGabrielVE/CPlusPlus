/*
 * VClubGolf.h
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef VCLUBGOLF_H_
#define VCLUBGOLF_H_
#include "VGeneral.h"
#include <vector>

class VClubGolf : public VGeneral{
public:
	VClubGolf();
	void ImprimirReporte(vector<string>, vector<float>);
};

#endif /* VCLUBGOLF_H_ */
