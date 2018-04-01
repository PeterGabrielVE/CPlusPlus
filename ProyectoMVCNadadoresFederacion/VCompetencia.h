/*
 *  VCompetencia.h
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */
#ifndef VCOMPETENCIA_H_
#define VCOMPETENCIA_H_
#include <iostream>  // entrada y salida
using namespace std;

class VCompetencia
{
   public:
      VCompetencia();
      int LeerEstilo();
      float LeerTiempo();
      int LeerLugar();
};
#endif // VCOMPETENCIA_H_
