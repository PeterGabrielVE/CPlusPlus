/*
 * MLanchero.h
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
 */

#ifndef MLANCHERO_H_
#define MLANCHERO_H_
#include "MPersona.h"
#include "MTraslado.h"
#include <vector>

class MLanchero:public MPersona
{
private:
	 int canttraslados;//atributo -dato de entrada
	 float acumganancia;
	 vector <float> vecmtoxdia;
	 vector <int> vcantTraslxcayo;
public:
	MLanchero();
	void Actualizar(float ganl,  MTraslado mt);
    //set y get de atributos
	void SetAcumganancia(float acumgan);
	float GetAcumganancia();
	void SetCanttraslados(int cantt);
	int GetCanttraslados() ;

	//metodos basicos de  vecmtoxdia
	int CantidadDias();
	void SetMtoxdia(float md, int posi);
	float GetMtoxDia(int i);


	//metodos basicos de vcantraslxcayo
		int CantidadTraslxcayo();
		void SetTraslxcayo(int ct, int posicion);
		float GetTraslxcayo(int posicion);


	//calculos
	float CalcMontoSemana();
	void Inicializar();

};

#endif /* MLANCHERO_H_ */
