/*
 * MProfesor.h
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MPROFESOR_H_
#define MPROFESOR_H_

#include "MPersona.h" // clase base gen�rica que ser� padre de MProfesor
class MProfesor : public MPersona
{ protected:
    int nrohijos, nivelac, categoria;
   public:
      MProfesor();
      void  SetNroHijos(int);
      void  SetNivelAc(int);
      void SetCategoria(int);
      int GetNroHijos();
      int GetNivelAc();
      int GetCategoria();
      string NombreCategoria();
      float BonoHijos();
};
#endif /* MPROFESOR_H_ */
