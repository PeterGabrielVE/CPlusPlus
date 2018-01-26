/*
 * MUniversidad.h
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MUNIVERSIDAD_H_
#define MUNIVERSIDAD_H_
#include "MContratado.h"
#include "MOrdinario.h"
// No tiene herencia con nadie
class MUniversidad
{   private:
      float acbonohorario;
      int ctdoctores, ctcont;
   public:
      MUniversidad();
      void SetAcBonoHorario(int);
      void SetCtDoctores(int);
      void SetCtCont(int);
      float GetAcBonoHorario();
      int GetCtDoctores();
      int GetCtCont();
      void ProcesarContratado(MContratado mcont);
      void ProcesarOrdinario(MOrdinario mord);
};
#endif /* MUNIVERSIDAD_H_ */
