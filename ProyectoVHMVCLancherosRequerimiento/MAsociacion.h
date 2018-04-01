/*
 * MAsociacion.h
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
 */

#ifndef MASOCIACION_H_
#define MASOCIACION_H_
#include "MLanchero.h"
#include "MCayo.h"
#include <vector>

class MAsociacion {
private:
   vector<MLanchero> veclancheros;
   vector<MCayo> veccayos;

public:
	MAsociacion();

	//metodos para manipular vector lancheros
	void IncluirLancheros(MLanchero ml);
	int CantidadLancheros();
	int Buscarlanchero(string ced);
	void SetLanchero(MLanchero ml, int posicion);
	MLanchero GetLanchero(int i);

	//metodos para manipular vector Cayos
	void IncluirCayo(MCayo mc);
	int CantidadCayos();
	void SetCayo(MCayo mc, int posicion);
	MCayo GetCayo(int i);

	//metodos de calculos
	void Procesar(MTraslado mt, int posi);

	string DetDiaEnLetras(int dia);

	vector<string> DetVecNombresDias();

	vector <string> DetVecNombresCayos();

	vector<float> DetVecMtoTotalSemana();

	int CalcTotTrasladosUnCayo(int ncayo);

	int CalcCantLancherosSintraslados(int dia);


};

#endif /* MASOCIACION_H_ */
