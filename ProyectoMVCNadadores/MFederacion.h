/*
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef MFederacion_H
#define MNFederacion_H
#include "MNadador.h"

using namespace std;

class MFederacion
{
      private:
       int contcompetmarip,//cuenta cada nadador que compitio en estilo mariposa.

       /*Dado que nos solicitan el Porcentaje de nadadores que tiene el Equipo nro 1
         con relaci�n al total de nadadores que participaron en todaslas competencias,
         entonces ese porcentaje = contador de nadadores del equipo 1 * 100/ contador total de todos los nadadores */
           contnadeq1,//contador de nadadores del equipo 1
           conttotnad,//contador total de todos los nadadores

       /*Para calcular el Porcentaje de medallas de oro que gan� el Equipo nro. 2,
         con relaci�n al total de medallas entregadas entre todas las competencias,
         hacemos: porcentaje= contador de medallas de oro que gano el equipo nro 2 * 100)/ contador total de todas las medallas entregadas*/
           contoroeq2,//contador de medallas de oro que gano el equipo nro 2
           conttotmed; //contador total de todas las medallas entregadas

      public:
             MFederacion ();

             //set
             void SetContCompetMarip(int acm);
             void SetContOroEq2(int coe2);
             void SetContTotMed(int ctm);
             void SetContNadEq1(int cneq1);
             void SetContTotNad(int ctn);

             //get
             int GetContCompetMarip();
             int GetContOroEq2();
             int GetContTotMed();
             int GetContNadEq1();
             int GetContTotNad();

             //procesar
             void ProcesarNadador (MNadador mn);
             void ProcesarCompetNadador(MNadador mn, MCompetencia mc );

             //Metodos de calculos
             float CalcPorcMedOroEq2();
             float CalcPorcNadEq1();
};

#endif


void SetContMedOro(int cmo);
void SetContMarip(int cm);
int GetContMedOro();
int GetContMarip();

