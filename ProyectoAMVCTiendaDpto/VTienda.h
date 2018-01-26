/*
 * VTienda.h
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */

#ifndef VTIENDA_H
#define VTIENDA_H
#include "VGeneral.h"
#include <vector>
class VTienda : public VGeneral
{  public:
      VTienda(); 
      void ReporteTienda(vector<string> auxnom,
                         vector<float> auxmontodep,
                         float montotottienda, float promedio);
};
#endif
