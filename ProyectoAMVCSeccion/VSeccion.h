
/* VSeccion.h
 * Author:Pedro Gabriel Leal
 *
 */

#ifndef VSECCION_H
#define VSECCION_H
#include <vector>
#include "VGeneral.h"

using namespace std;

class VSeccion : public VGeneral
{
   public:
      VSeccion(); 
      void ImprimirSeccion(string nomprof, int numsecc, 
                           vector<string> auxcedulas,
                           vector<string> auxnombres,
                           vector<float> auxnotas,
                           float promedio, float porcentaje);  
};
#endif
