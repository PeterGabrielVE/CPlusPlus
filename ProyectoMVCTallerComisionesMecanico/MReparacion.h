/* MReparacion.h
 *
 * Author: Pedro Gabriel Leal
 *
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

