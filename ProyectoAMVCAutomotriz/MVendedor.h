/*
 * MVendedor.h
 *
 *  Created on: 05/06/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef MVENDEDOR_H_
#define MVENDEDOR_H_

#include "MPersona.h"       // clase gen�rica
class MVendedor : public MPersona
{  private:
     float montovend;
   public:
      MVendedor();
      void SetMontoVend(float);
      float GetMontoVend();
      float Comision();
      float Bono();
};
#endif /* MVENDEDOR_H_ */
