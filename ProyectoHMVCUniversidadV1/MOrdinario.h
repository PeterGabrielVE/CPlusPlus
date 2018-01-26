/*
 * MOrdinario.h
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MORDINARIO_H_
#define MORDINARIO_H_

#include "MProfesor.h" // Clase base (padre) para MOrdinario
                       // Clase derivada (hijo) de MPersona
class MOrdinario : public MProfesor
{
  private:
    float sueldomensual;
    int horario;
   public:
      MOrdinario();
      void  SetSueldoMensual(float);
      void  SetHorario(int);
      float GetSueldoMensual();
      int GetHorario();
      float DescuentoClub();
      float BonoHorario();
      float SueldoNeto();
};
#endif /* MORDINARIO_H_ */
