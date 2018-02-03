/*
 * ArreglosDulce.h
 *
 *  Created on: 23/02/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef ARREGLOSDULCE_H_
#define ARREGLOSDULCE_H_
#include<string>
#include"Postres.h"
using namespace std;

class ArreglosDulce
{
	Postres ArrPostres[4];
	float AcumAzucar;
	int Tamano;
	float ContRaciones;
	int ContNoCacao;
	int ContCacaoyMant;
	Postres MenorR;
	Postres MayorM;
	Postres MenorM;



public:
	ArreglosDulce();
	void Inicializar();
	void GuardarPostre(Postres elpostre,int laposicion);
	void DetAcumAzucar(int laposicion);
	void DetMenor(Postres &elpostre);
	float CalcularProm();
	int ContarMayores();
	Postres getMenorR();
	int getTamano();
	Postres getelpostre(int laposicion);

	void DetContRaciones(Postres elpostre);
	float CalPorcMenorR();
	void DetContNoCacao(Postres elpostre);
	int getCotNoCacao();
	void DetContCacaoyMant(Postres elpostre);
	int getContCacaoyMant();
	void DetMayorM(Postres elpostre);
	Postres getMayorM();
	Postres getMenorM();
	void DetMenorM(Postres elpostre);
	float CalTotalAR();
	float DetFaltante();
	float CalcCostoTotal();
	void OrdenarMayor();




};

#endif /* ARREGLOSDULCE_H_ */
