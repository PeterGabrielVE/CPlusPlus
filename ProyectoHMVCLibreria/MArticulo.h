/*
 * MArticulo.h
 *
 *  Created on: 02/05/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MARTICULO_H_
#define MARTICULO_H_
#include <string> //se incluye la clase string porque se requiere para el nombre
using namespace std; //se requiere cada vez que incluimos una clase estandar de C++

//DECLARACION DE LA CLASE Articulo
class MArticulo
{
      protected:
              string codigo;
              float pvp, costo;
      public:
              MArticulo();
              void SetCodigo(string cod);
              void SetPVP(float p);
              void SetCosto(float c);
              string GetCodigo();
              float GetPVP();
              float GetCosto();
};

#endif /* MARTICULO_H_ */
