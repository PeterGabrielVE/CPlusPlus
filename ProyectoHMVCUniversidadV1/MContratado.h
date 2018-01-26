/*
 * MContratado.h
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MCONTRATADO_H_
#define MCONTRATADO_H_

#include "MProfesor.h" // Clase base (padre) para MContratado
                       // Clase derivada (hijo) de MPersona
class MContratado : public MProfesor
{
  private:
    float montocontrato;
    int duracioncontrato;
   public:
      MContratado();
      void  SetDuracionContrato(int);
      void  SetMontoContrato(float);
      int GetDuracionContrato ();
      float GetMontoContrato();
      float SueldoMensual();
      float SueldoNeto();
};
#endif /* MCONTRATADO_H_ */
