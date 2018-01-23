/*
 * VTaller.cpp
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#include "VTaller.h"

VTaller::VTaller() {
	// TODO Auto-generated constructor stub

}

void VTaller::ImprimirMayor(float m)
{
   system("cls");
   cout << "\n\n Mayor monto total de comision: " << setiosflags(ios::fixed) << setprecision(2) << m << endl << endl;
   system("pause");
}
