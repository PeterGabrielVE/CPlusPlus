/*
 * MReparacion.h
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#ifndef MREPARACION_H
#define MREPARACION_H
class MReparacion
{
   private:
      int tipo_reparacion;
      float monto_reparacion;
   public:
      MReparacion();
      void SetTipoReparacion(int t);
      void SetMontoReparacion(float m);
      int GetTipoReparacion();
      float GetMontoReparacion();
      float CalcComisionReparacion();
      float CalcGanancia();
};
#endif

