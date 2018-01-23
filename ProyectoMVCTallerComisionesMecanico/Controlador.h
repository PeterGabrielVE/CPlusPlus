// Controlador. h

#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "MTaller.h"
// MTaller incluye a MMecanico y a su vez MMecanico incluye a MRepara
#include "VReparacion.h"
#include "VMecanico.h"
#include "VTaller.h"

using namespace std;
class Controlador
{

   public:
      Controlador();
      void ProcesarMecanicos();
};

#endif
          
