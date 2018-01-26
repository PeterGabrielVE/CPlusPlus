/*
 * VCompannia.h
 *
 *  Created on: 05/01/2012
 *      Author: Rosa Díaz
 */

#ifndef VCOMPANNIA_H_
#define VCOMPANNIA_H_
#include <vector>
#include "VGeneral.h"
class VCompannia : public VGeneral{
public:
	VCompannia();
	void ReporteCorredores(vector<string> auxced,
			               vector<string> auxnom,
	                       vector<float> auxcomi);
	void ReporteCorredoresSuperaronMeta(vector<string> auxced);
};
#endif /* VCOMPANNIA_H_ */
