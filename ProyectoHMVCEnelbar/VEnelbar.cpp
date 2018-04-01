/* Implementaci�n de la vista mayor (.cpp)
 *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */

#include "VEnelbar.h"

VEnelbar::VEnelbar()
{
}

void VEnelbar::ImprimirENELBAR (float cq, float rp, int ce, float may,float porc,vector<string> cod,vector<int> imp ) {
/* Se muestra por pantalla lo requerido */
   cout << '\n' << "Capital que queda: ";
   ImprimirFloat (cq);
   cout << "\nMonto renta promedio: ";
   ImprimirFloat (rp);
   cout << "\nSuscriptores con renta al menos igual al promedio: ";
   cout << ce << endl;
   cout << '\n' << "Mayor Renta Mes: " ;
   ImprimirFloat(may);
   cout << '\n' << "Porcentaje Renta de Suscriptores con Cant. Impulsos entre 1000 y 2500: ";
   ImprimirFloat(porc);
   cout<<setw(20)<<"Listado de Suscriptores"<<endl;
   cout<<setw(10)<<"Codigo"<<setw(10)<<"Cantidad de Impulsos"<<endl;
   for(int i= 0; i<cod.size(); i++)
	   cout<<setw(10)<<cod[i]<<setw(10)<<imp[i]<<endl;

}
