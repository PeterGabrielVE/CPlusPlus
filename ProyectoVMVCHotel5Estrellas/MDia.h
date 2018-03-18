/*
 *  MDia.h
 *
 *  Created on: 02/02/2014
 *      Author: Pedro Gabriel Leal
 */


#ifndef MDIA_H
#define MDIA_H
#include "MServicio.h"
#include <vector>

class MDia
{
      private:
              vector<float> vec_servicios;
      public:

             MDia();
             //set
             void SetVecServicios(vector<float> vs);
             //get
             vector<float> GetVecServicios() ;

             // //set y get para enviar y recibir un elemento de una posicion esp�cifica del vector
             void SetServicio(float mtoserv, int posi);
             float GetServicio(int i);

             //metodos propios
             void Actualizar(MServicio ms);
             float CalcTotIngresoDia();
             void InicializarVector();


};

#endif
