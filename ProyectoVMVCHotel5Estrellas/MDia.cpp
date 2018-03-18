/*
 *  MDia.cpp
 *
 *  Created on: 02/02/2014
 *     Author: Pedro Gabriel Leal
 */


#include "MDia.h"

MDia::MDia()
{
for(int i=0;i<9;i++)
     vec_servicios.push_back(0);
     
}

//set
vector<float> MDia::GetVecServicios()
{
    return vec_servicios;
}

//get
void MDia::SetVecServicios(vector<float> vs)
{
    vec_servicios = vs;
}

// //set y get para enviar y recibir un elemento de una posicion esp�cifica del vector
void MDia::SetServicio(float mtoserv, int posi)
{
	vec_servicios[posi]= mtoserv;
}

float MDia::GetServicio(int i)
{
	return vec_servicios[i];
}

//metodos propios

void MDia::Actualizar(MServicio ms)
{
	vec_servicios[ms.GetTipo()-1]+=ms.GetMonto();
}

float MDia::CalcTotIngresoDia()
{
      float ac=0;
      for(int i=0;i<9;++i)
        ac+=vec_servicios[i];

      return ac;
}
void MDia::InicializarVector()
{
     for(int i=0;i<3;i++)
       vec_servicios[i]=0;
}


     
