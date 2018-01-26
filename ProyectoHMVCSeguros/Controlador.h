/*
 * Controlador.h
 * Author:Pedro Gabriel Leal
 *
 */
#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "MCompania.h"
#include "VAsegurado.h"
#include "VCompania.h"

class Controlador
{
      private:

       MCompania mc;

      public:
       Controlador();
       //metodos propios de la clase
       void ProcesarPolizas();
       void ReporteCompSeguros();
};
#endif

