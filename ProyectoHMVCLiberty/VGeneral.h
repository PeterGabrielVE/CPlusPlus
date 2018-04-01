/*
 * Autor: Pedro Gabriel Leal
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
      double LeerValidarNroDecimal(string msj, float valorinicial,float valorfinal);
      char LeerChar(string msj);
      void ImprimirChar(string msj, char c);
      void ImprimirString(string msj, string s);
      void ImprimirNro(string msj, long n);
      void ImprimirNroDecimal(string msj, double f);

   // Metodos para trabajar con archivos texto de entrada
	  void LeerNombreArchivo(string, char[120]);
      bool AbrirArchivoEntrada(std::ifstream &archivo, char nomb_arch [128]);
      string LeerLineaArchivo(std::ifstream &archivo);
      char LeerDatoCharArchivo(std::ifstream &archivo);
      long LeerDatoNroArchivo(std::ifstream &archivo);
      double LeerDatoNroDecimalArchivo(std::ifstream &archivo);
      bool FinArchivo(std::ifstream &archivo);
      void CerrarArchivoEntrada(std::ifstream &archivo);

      // Metodos para trabajar con archivos texto de salida
      bool AbrirArchivoSalida(std::ofstream &archivo, char nomb_arch [120]);
      void GrabarLineaArchivo(std::ofstream &archivo, string linea);
      void GrabarDatoNroArchivo(std::ofstream &archivo, long nro);
      void GrabarDatoNroDecimalArchivo(std::ofstream &archivo, double nro);
      void CerrarArchivoSalida(std::ofstream &archivo);
};
#endif