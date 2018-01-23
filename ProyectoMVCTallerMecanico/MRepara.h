/*
 * MRepara.h
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#ifndef MREPARA_H
#define MREPARA_H
class MRepara
{
   private:
      int tipo_reparacion;
      float monto_reparacion;
   public:
      MRepara();
      void SetTipoReparacion(int t);
      void SetMontoReparacion(float m);
      int GetTipoReparacion();
      float GetMontoReparacion();
      float ComisionReparacion();
};
#endif
