/*
 * MVida.h
 * Author:Pedro Gabriel Leal
 *
 */
#ifndef MVIDA_H
#define MVIDA_H
#include "MAsegurado.h"

class MVida : public MAsegurado
{
      private:
       int edad;

      
     public:
       MVida();
       //set
       void SetEdad(int e);
       //get
       int GetEdad();
       //metodos propios de la clase
       float CalcRecargo();
       float CalcCostoPoliza();
       
};

#endif
         
