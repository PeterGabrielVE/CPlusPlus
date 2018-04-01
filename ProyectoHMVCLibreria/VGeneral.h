/*
 * Author: Pedro Gabriel Leal
 */
#ifndef VGENERAL_H
#define VGENERAL_H

#include <cstdlib>  //incluye la clase cstdlib para trabajar con system(..)
#include <string>   //incluye la clase string porque se requiere usar el tipo de dato string
#include <iomanip>  //incluye la clase iomanip para poder dar formato a los numeros reales
#include <iostream> //incluye la clase iostream para usar los objetos cin y cout
#include <cstring>
#include <fstream>  // incluye la clase fstream para trabajar con archivos

using namespace std;//se requiere siempre que se incluya una libreria estandar de C++

class VGeneral{
   public:
      VGeneral();
      void Pausa();
      void Limpiar();
      void ImprimirEncabezado(string msj1, string msj2);
      void ImprimirMensaje (string msj);
	  void ImprimirLineasBlanco(int ct);
      long LeerNro(string msj);
      string LeerString(string msj);
      double LeerNroDecimal(string msj);
      long LeerValidarNro(string msj, long valorinicial, long valorfinal);
      long LeerValidarNroValorInicial(string msj, long valorinicial);
      long LeerValidarNroValorFinal(string msj, long valorinicial);
      char LeerChar(string msj);
      void ImprimirChar(string msj, char c);
      void ImprimirString(string msj, string s);
      void ImprimirNro(string msj, long n);
      void ImprimirNroDecimal(string msj, double f);
};
#endif
