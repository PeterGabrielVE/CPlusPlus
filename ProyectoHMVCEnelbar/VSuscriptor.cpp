/*Implementaci�n de la vista menor (.cpp)
 *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */
#include "VSuscriptor.h"

VSuscriptor::VSuscriptor() {}

void VSuscriptor::ImprimirSuscriptor (string c, float i, float r){
   cout << c << "\t\t" << i << "\t\t";
   ImprimirFloat (r);
/* Se muestra por pantalla lo requerido */
}
