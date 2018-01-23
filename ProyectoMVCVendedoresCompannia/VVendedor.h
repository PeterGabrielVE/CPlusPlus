/*
 * Author: Pedro Gabriel Leal
 *
 */



#ifndef VVENDEDOR_H
#define VEMPLEADO_H
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <iomanip>
using namespace std;

class VVendedor
{
   public:
      VVendedor();
      string LeerCedula();
      string LeerNombre();
      float LeerSueldobase();
      float LeerMontoventas();
      void ImprimirVendedor (string ced,string nom,
                             float comision, float sn);
};


#endif
