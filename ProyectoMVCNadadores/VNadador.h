/*
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef VNADADOR_H_
#define VNADADOR_H_
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class VNadador
{
   public:
      VNadador();
      string LeerCedula();
      string LeerNombre();
      int LeerEquipo();
      void ImprimirNadador (string c,string n, int totmedgan);
};
#endif
