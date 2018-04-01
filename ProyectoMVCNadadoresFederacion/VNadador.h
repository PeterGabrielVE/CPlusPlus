/*
 *  VNadador.h
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 *  Ajustado: 19/03/2012
 */
#ifndef VNADADOR_H_
#define VNADADOR_H_
#include <cstdlib> // uso del system("cls") y system("pause")
#include <iostream> // entrada y salida
using namespace std;

class VNadador
{
   public:
      VNadador();
      string LeerCedula();
      string LeerNombre();
      int LeerEquipo();
      void ImprimirNadador(string  c, string n, int tm);
};
#endif // VNADADOR_H_
