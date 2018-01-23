/*
 * VMecanico.h
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#ifndef VMecanico_H
#define VMecanico_H
#include <iostream> // Entradas y Salidas
#include <cstdlib>  // Uso de system
#include <iomanip> // Imprimir valores float con precisi�n en los decimales
using namespace std;

class VMecanico
{
   public:
      VMecanico();
      string LeerCedula();
      string LeerNombre();
      int LeerCantidadReparaciones();
      void ImprimirMecanico(string c, string n, float co,float m);
};
#endif
