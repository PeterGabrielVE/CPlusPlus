
/*Controlador.h
* Author:Pedro Gabriel Leal
 */
#ifndef CONTROLADOR_H
#define CONTROLADOR_H
//#include <string>
// #include <vector>
#include "MSeccion.h"
#include "VSeccion.h"


using namespace std;
class Controlador
{
   private:     
      VSeccion vs;    
      MSeccion ms;
   public:
      Controlador();
      void ProcesarSeccion();
      void ReporteSeccion();
     
};  
#endif

