/*
 * Controlador.h
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */
#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "MTienda.h"
#include "VTienda.h"
class Controlador
{  private:
     MTienda  mt;
     VTienda  vt;
   public:
     Controlador();
     void CargarDatosDepartamentos();
     void ProcesarVentas();
     void ReporteTienda();
};
#endif 
