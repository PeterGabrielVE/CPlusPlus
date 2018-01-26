/*
 * MAsegurado.h
 * Author:Pedro Gabriel Leal
 */
#ifndef MASEGURADO_H
#define MASEGURADO_H
#include "MPersona.h"

class MAsegurado : public MPersona
{
      private:
      string fechaseguro;
      int tipopoliza;
      float cantaseg;
      float porcaplicar;
             
       public:
         MAsegurado();
         void SetFechaseguro(string fech);
         void SetTipoPoliza(int tp);
         void SetCantAseg(float ca);
         void SetPorcAplicar(float pa);
         string GetFechaseguro();
         int GetTipoPoliza();
         float GetCantAseg();
         float GetPorcAplicar();
         float CalcCostoBasico();
         string DeterminarTipoPolizaLetras();
};

#endif
         
