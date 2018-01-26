/*
 * VPeluqueria.h
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 *
 */

#ifndef VPeluqueria_H
#define VPeluqueria_H
#include <vector>
#include "VGeneral.h"
class VPeluqueria : public VGeneral
{public:
	VPeluqueria();
	void ImprimirConsulta(string nom,string nomdia,float bsdia);
	void ImprimirPeluquera(string ced,string nom,vector<string> nomdias,
	    		           vector<float> bsxdia, float totalsemana);
};
#endif
