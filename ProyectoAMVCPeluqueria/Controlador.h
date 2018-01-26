/*
 * Controlador.h
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "MPeluqueria.h"
#include "VPeluqueria.h"
class Controlador
{  private:
	  bool chequeopcion;
      MPeluqueria mp;
      VPeluqueria vp;
   public:
      Controlador();
      void CargarDatosServicios();
      void ProcesarPeluqueras();
      void ConsultaPeluquera();
      void ReportePeluqueria();
};  
#endif
