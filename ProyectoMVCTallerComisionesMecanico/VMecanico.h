/* VMecanico.h
 *
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef VMecanico_H
#define VMecanico_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class VMecanico
{
   public:
      VMecanico();
      long LeerCedula();
      string LeerNombre();
      int LeerCantidadReparaciones();
      void ImprimirMecanico(long c, string n, float co, float maymontocomis);
};
#endif

