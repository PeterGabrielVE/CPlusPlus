/*
 * MCompania.h
 * Author:Pedro Gabriel Leal
 *
 */
#ifndef MCOMPANIA_H
#define MCOMPANIA_H
#include "MVida.h"
#include "MAuto.h"

class MCompania
{
      private:
	   float acumvida;
	   float acumauto;
       int contvida;
       int contauto;
       int contv50y70;
       int contplzarechazvida;
       int contplzarechazauto;
      
       public:
        MCompania();

        //set
        void SetAcumvida(float acumvida);
        void SetAcumauto(float acumauto);
        void SetContvida(int contvida);
        void SetContauto(int contauto);
        void SetContv50y70(int contv50y70);
        void SetContplzarechazvida(int contplzarechazvida);
        void SetContplzarechazauto(int contplzarechazauto);

        //get
        int GetContVida();
        int GetContAuto();
        float GetAcumvida();
        float GetAcumauto();
        int GetContV50y70();
        int GetContplzarechazvida();
        int GetContplzarechazauto() ;

        //metodos propios
        //procesar (habr� tantos procesar como hijos hayan en la herencia)
        void ProcesarVida(MVida mv);
        void ProcesarAuto(MAuto ma);

        //m�todos de calculos(aqui se incluye porcentajes, promedios, totales, c�lculos del mayor de 2, o 3)

        float CalcPorcVida50y70();
        float CalcPorcRechazvida();
        float CalcPorcRechazauto();
        string CalcTipoPolizaMayor();
};

#endif
