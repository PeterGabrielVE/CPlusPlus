/*
 * Controlador.h
 *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_

/* AC� VAN LOS INCLUDE DE LAS CLASES */
#include "MEnelbar.h"
#include "MSuscriptor.h"
#include "VEnelbar.h"
#include "VSuscriptor.h"

class Controlador {
private:
/* AC� SE DEFINE UNA INSTANCIA POR CLASE */
   MEnelbar me;
   MSuscriptor ms;
   VEnelbar ve;
   VSuscriptor vs;
public:
   Controlador();
   void ProcesarSuscriptores();
};


#endif /* CONTROLADOR_H_ */
