/*Implementaci�n de la clase menor (.cpp)
 *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */
#include "MSuscriptor.h"
MSuscriptor :: MSuscriptor () {
/* Inicializar variables que ameriten */
}

void MSuscriptor :: SetCodigo(string c){
   codigo = c;
}

void MSuscriptor :: SetImpulsos(int i){
   impulsos = i;
}

string MSuscriptor :: GetCodigo(){
   return codigo;
}

int MSuscriptor :: GetImpulsos(){
   return impulsos;
}

float MSuscriptor :: DetRentaMes(){
   float monto_imp;
   if (impulsos < 1000)
      monto_imp = 0.01;
   else if (impulsos < 2000)
      monto_imp = 0.08;
   else monto_imp = 0.05;
   return 40 + impulsos * monto_imp;
}
