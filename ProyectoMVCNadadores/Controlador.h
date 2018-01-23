/*
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_

#include "MFederacion.h"
#include "VFederacion.h"
#include "VNadador.h"
#include "VCompetencia.h"


class Controlador
{
      private:
	    MFederacion mf; //Relacion DE COMPOSICION -> CLASE QUE SE USA EN DOS O MAS METODOS DEL CONTROLADOR

      public:
             Controlador ();
             void ProcesarFederacion ();
             void ReporteFederacion();
};

#endif
