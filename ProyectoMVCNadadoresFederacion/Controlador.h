/*
 *  Controlador.h
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_

#include "MFederacion.h"
// MFederacion incluye a MNadador y a su vez MNadador incluye a MCompetencia
#include "VCompetencia.h"
#include "VNadador.h"
#include "VFederacion.h"

class Controlador
{
   public:
      Controlador();
      void ProcesarJornadasNatacion();
};
#endif // CONTROLADOR_H_
