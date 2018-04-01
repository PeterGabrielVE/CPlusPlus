/*
 * VAsociacion.h
 *
 *  Created on: 05/02/2014
 *
 *      Author: Gabriel
 */

#ifndef VASOCIACION_H_
#define VASOCIACION_H_
#include <vector>
#include "VGeneral.h"
class VAsociacion : public VGeneral
{
public:
	VAsociacion();
	void ImprimirReporteLancheros( vector<string> vauxced, vector<string> vauxnom,vector<float> vauxgan );
	void ImprimirListadoCayos( vector<string> vauxnomcayos,vector<float> vauxingresos);
};

#endif /* VASOCIACION_H_ */
