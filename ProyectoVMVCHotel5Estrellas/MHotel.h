/*
 *  MHotel.h
 *
 *  Created on: 02/02/2014
 *      Author: Pedro Gabriel Leal
 */


#ifndef MHOTEL_H
#define MHOTEL_H
#include "MDia.h"
#include <string>
using namespace std;

class MHotel
{
  private: 
       vector<MDia> vecdias;
  public: 
       MHotel();

       void IncluirDia(MDia md);
       int CantidadDias();
       void SetDia(MDia md, int posi);
       MDia GetDia(int i);


       void Procesar(int posi, MServicio ms);
       float CalcTotIngresoSem();
       vector <float> DetVecPorcServ();
       vector<string> DetVecDiasSinIngresos(int serv);
       string DetDiaEnLetras(int d);
       vector<string> CalcVecdias();
       string DetServicioEnLetras(int serv);
};

#endif
