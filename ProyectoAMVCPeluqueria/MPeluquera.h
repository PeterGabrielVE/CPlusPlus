/*
 * MPeluquera.h
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef MPeluquera_H
#define MPeluquera_H
#include <vector>
#include "MPersona.h"
#include "MArticulo.h"
#include "MServPrest.h"
class MPeluquera:public MPersona
{ private:
	vector<float> vbsdia;
   public:
    MPeluquera();
    void SetBsDia(int dia, float bs);
    void SetBsCadaDia(vector<float> vbssemana);
    float GetBsDia(int dia);
    vector<float> GetBsCadaDia();
    int CantDias();
    void InsertarBsDia(float bs);
    void InicializarBsDiarios();
    void ActualizarBs(MServPrest msp, MArticulo mts);
    float TotalBsSemana();
};
#endif
