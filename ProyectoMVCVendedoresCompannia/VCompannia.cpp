/*
 * Author: Pedro Gabriel Leal
 *
 */



#include "VCompannia.h"

VCompannia::VCompannia(){}
      
void VCompannia::ImprimirMontoNomina (float mtn)
{
   system ("cls");
   cout << "\n\n\tINFORMACION POR LA EMPRESA" << endl;
   cout << "\t==========================" << endl;
   cout << "\n\tMonto total a cancelar por la nomina:"
	    << setiosflags(ios::fixed)<<setprecision(2) << mtn << endl;
   system ("PAUSE");
}
