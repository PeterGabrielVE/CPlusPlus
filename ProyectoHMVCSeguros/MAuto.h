/*
 * MAuto.h
 * Author:Pedro Gabriel Leal
 */
#ifndef MAUTO_H
#define MAUTO_H
#include "MAsegurado.h"

class MAuto : public MAsegurado
{
      private:
       string placa;
       string modelo;
       string marca;
       int anno;

      public:
       MAuto();
       //set
       void SetPlaca(string pl);
       void SetModelo(string mod);
       void SetMarca(string marc);
       void SetAnno(int anno);
       //get
       string GetPlaca() ;
       string GetModelo() ;
       string GetMarca() ;
       int GetAnno() ;
       //metodos propios de la clase
       float CalcDscto(int annoencurso);
       float CalcCostoPoliza(int annoencurso);


       
};

#endif
