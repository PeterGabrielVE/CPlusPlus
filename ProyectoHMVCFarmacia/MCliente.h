#ifndef MCLIENTE_H
#define MCLIENTE_H
#include "MPersona.h"
#include "MMiscelaneo.h"
#include "MMedicina.h"

class MCliente : public MPersona
{
      private:
        float ac_misc;
        float ac_medi;
        float ac_des_medi;
        float ac_des_misc;

      public:
        MCliente();
        //set
        void SetAcMedi(float ac_me);
        void SetAcMisc(float ac_mi);
        void SetAcDesMedi(float ac_des_me);
        void SetAcDesMisc(float ac_des_mi);
        //get
        float GetAcMedi() ;
        float GetAcMisc() ;
        float GetAcDesMedi() ;
        float GetAcDesMisc() ;
        //procesar
        void ProcesarMiscelaneo(MMiscelaneo mi);
        void ProcesarMedicina(MMedicina mm);
        //calculos
        float CalcMontoBruto();
        float CalcTotalDsctos();
        float CalcMontoIva();
        float CalcMontoNeto();


};
#endif
 
 
 
 
 
