//Rectangulo.cpp
#include "Rectangulo.h"

Rectangulo::Rectangulo()

  {

  }

   void Rectangulo::setBase(float laBase)
  {
     base=laBase;
  }
   float Rectangulo::getBase()
  {
     return base;
  }

   void Rectangulo::setAltura(float laAltura)
  {
     altura = laAltura;
  }

   float Rectangulo::getAltura()
  {
     return altura;
  }

   float Rectangulo::calArea()
  {
     float area;
     area= base*altura;
     return area;
  }
