/*
 * MProfesor.cpp
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MProfesor.h"

// MProfesor.cpp

MProfesor :: MProfesor(){}

void MProfesor :: SetNroHijos(int nh)
{   nrohijos = nh;  }

void MProfesor :: SetNivelAc(int n)
{   nivelac = n;  }

void MProfesor :: SetCategoria(int c)
{  categoria = c;  }

int MProfesor :: GetNroHijos()
{   return nrohijos;  }

int MProfesor :: GetNivelAc()
{   return nivelac;  }

int MProfesor :: GetCategoria()
{   return categoria;  }

string MProfesor :: NombreCategoria()
{
       if (categoria == 1)
           return "Contratado";
       else return "Ordinario";
}

// Calcula el bono por hijos de acuerdo al n�mero de hijos
float MProfesor :: BonoHijos()
{   return nrohijos * 250;  }
