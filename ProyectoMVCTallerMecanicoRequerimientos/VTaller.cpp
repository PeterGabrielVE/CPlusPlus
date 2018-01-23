/*
 * VTaller.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "VTaller.h"

VTaller::VTaller()
{
	// TODO Auto-generated constructor stub

}

void VTaller::ImprimirMayor(float m, float totalingresos,
		                    string tiporepmayorG)
{
   system("cls");
   cout << "INFORMACION DEL TALLER" << endl;
   cout << "======================" << endl;
   cout << "\n\n Mayor monto total de comision: "
	    << setiosflags(ios::fixed) << setprecision(2) << m << endl;
   cout << "\n\n Monto total ingresado por reparaciones: "
		<< setiosflags(ios::fixed) << setprecision(2) << totalingresos << endl;

   cout << "\n\n Tipo de reparacion con Mayor ganancia: "
	    <<tiporepmayorG << endl;

   system("pause");
}
