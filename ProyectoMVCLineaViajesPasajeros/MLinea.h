/*
 * MLinea.h
 *
 *  Created on: 21/10/2013
 *     Author: Pedro Gabriel Leal
 */

#ifndef MLINEA_H_
#define MLINEA_H_
#include "MViaje.h"

class MLinea {
private:
	int contcaracas;
	float acummanana;
	float acumtarde;

public:
	MLinea();

    float GetAcummanana() ;
    float GetAcumtarde() ;
    int GetContcaracas();
    void SetAcummanana(float acm);
    void SetAcumtarde(float act);
    void SetContcaracas(int cc);

    void ProcesarViaje(MViaje mv);
    string CalcTurnoMenosIngreso();
};

#endif /* MLINEA_H_ */
