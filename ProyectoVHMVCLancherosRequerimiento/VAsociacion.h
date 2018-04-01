/*
 * VAsociacion.h
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
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
	void ImprimirConsulta( string nombredia, string nombrelanchero,
				                        float montodia, float montosemana);
	void ImprimirListadoIngresosDiarios(vector<string> vauxdias, vector<float> vauxmtosemana);

	void ImprimirTrasladosLanchero (string nombrelanchero,int canttraslados);
    void ImprimirCantTrasladosxUnCayo(int canttraslados);
    void ImprimirCantLacherosSinTraslados(int cantlachsintrasl);
};

#endif /* VASOCIACION_H_ */
