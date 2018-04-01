 /*
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef VGENERAL_H_
#define VGENERAL_H_
#include <string> //incluye la clase string porque se requiere usar el tipo de dato string
#include <iomanip> //incluye la clase iomanip para poder dar formato a los numeros reales
#include <iostream>//incluye la clase iostream para usar los objetos cin y cout
#include <fstream>
#include <cstdlib>

using namespace std;//se requiere siempre que se incluya una libreria estandar de C++

class VGeneral{
   public:
      VGeneral();
      void Pausa();
      void Limpiar();
      int SeleccionarRespuesta(string msj);
      void ImprimirEncabezado(string msj1, string msj2);
      void ImprimirMensaje(string msj1);
      long LeerLong(string msj);
      string LeerString(string msj);
      float LeerFloat(string msj);
      int LeerInt(string msj);
      char LeerChar(string msj);
      void ImprimirFloat(float num);

      bool AbrirArchivo (std::ifstream &archivo, char nomb_arch [128]);
      string LeerLinea (std::ifstream &archivo);
      char LeerChar (std::ifstream &archivo);
      long LeerLineaLong (std::ifstream &archivo);
      float LeerLineaFloat (std::ifstream &archivo);
      string LeerDato (std::ifstream &archivo);
      bool FinArchivo (std::ifstream &archivo);
      void CerrarArchivo (std::ifstream &archivo);
};



#endif /* VGENERAL_H_ */
