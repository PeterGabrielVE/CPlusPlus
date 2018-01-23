/*
 * VRepara.cpp
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#include "VRepara.h"

VRepara::VRepara() {
	// TODO Auto-generated constructor stub

}
// Lee y valida el dato tipo de reparaci�n. Valor entre 1 y 3
int VRepara::LeerTipoReparacion()
{
   int t;
   do
    {  cout << "Tipo Reparacion (1. Electrica, 2. Tren Delantero, 3. Frenos): ";
       cin >> t;
	   if (t < 1 or t > 3)
          cout<<"\n Dato no valido!"<<endl;
    }while (t < 1 or t > 3);
   return t;
}

// Lee y valida el dato monto de la reparaci�n. Valor mayor que cero
float VRepara::LeerMontoReparacion()
{
   float m;
   do
    { cout << "Monto (BsF): ";
      cin >> m;
      if (m <= 0)
          cout<<"\n Dato no valido!"<<endl;
     }while (m <= 0);
   return m;
}



