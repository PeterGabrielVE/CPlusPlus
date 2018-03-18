/*
 *  Controlador.h
 *
 *  Created on: 02/02/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "MHotel.h"
#include "VHotel.h"
using namespace std;

class Controlador
{
      private:
              MHotel mh;
              VHotel vh;
      public:
             Controlador();
             void ProcesarDia();
             void Reporte();
             void ConsultarServicio();
};

#endif
