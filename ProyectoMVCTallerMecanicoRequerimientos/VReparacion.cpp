/*
 * VReparacion.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "VReparacion.h"

VReparacion::VReparacion()
{
	// TODO Auto-generated constructor stub

}

int VReparacion::LeerTipoReparacion()
{
   int t;
   do
   	{
   	  cout << "Tipo Reparacion (1. Electrica, 2. Tren Delantero, 3. Frenos): ";
   	  cin >> t;
   	  if (t <1 or t >3)
   		cout<<"\n\tDato NO Valido! \n" << endl;
   	}
   	while (t < 1 or t > 3);
   	return t;
}

float VReparacion::LeerMontoReparacion()
{
   float m;
   do
     {
	   cout << "Monto de la reparacion (BsF): ";
       cin >> m;
       if (m <0)
      	 cout<<"\n\tDato NO Valido! \n" << endl;
      	}
      	while ( m<0);
   return m;
}
