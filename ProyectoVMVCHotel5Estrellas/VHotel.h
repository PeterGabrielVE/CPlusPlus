/*
 *  VHotel.h
 *
 *  Created on: 02/02/2014
 *      Author: Pedro Gabriel Leal
 */


#ifndef VHOTEL_H
#define VHOTEL_H
#include "VGeneral.h"
#include <vector>
class VHotel:public VGeneral

{
  public:
       VHotel();
       void ImprimirReporte( vector <string> vauxdias,
    		                 vector<float> vauxingresos,
                             float totIngresosem,
                             vector <string> vauxservicios,
                             vector<float> vauxporc );
       void ImprimirConsulta(vector<string> vauxdiasiningresos);
          
};

#endif
