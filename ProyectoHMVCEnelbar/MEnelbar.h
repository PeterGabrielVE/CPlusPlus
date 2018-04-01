/*
 * MEnelbar.h
 *
 *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MENELBAR_H_
#define MENELBAR_H_

#include <vector>
#include "MSuscriptor.h"
using namespace std;

class MEnelbar{
private:
   float capital_empieza;
   vector <MSuscriptor> arr_suscr;

public:
   MEnelbar();
   void SetCapitalEmpieza(float);
   float GetCapitalEmpieza();
   void IncluirSuscriptor(MSuscriptor);
   int CantSuscriptores();
   float GetCapitalQueda();
   float MontoRentaProm();
   int CantSusctEncimaProm();
   int BuscarSuscriptor(string cod);
   MSuscriptor ObtenerSuscriptor(int i);
   float MayorRentaMes();
   float PorcSusCantImp();
   float Prompulsos();
   void listsusdebajo(vector<string> &codigo, vector <int> &impulsos);
};


#endif /* MENELBAR_H_ */
