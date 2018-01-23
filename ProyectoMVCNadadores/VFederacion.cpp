/*
 * Author: Pedro Gabriel Leal
 *
 */

#include "VFederacion.h"

VFederacion::VFederacion(){}

void VFederacion::ImprimirFederacion(float porcmedOroeq2, float porcnadeq1, int totcompetmarip)
{

  system("cls");
  cout<<"\n\n\t\t\t  INFORMACION DE LA FEDERACION"<<endl;
  cout<<"\n\t\t\t  ____________________________\n\n";
  cout<<"\n  Porcentaje de medallas de oro que gan� el Equipo nro. 2\n"
	  <<"  respecto al total de medallas entregadas entre todas las competencias.: "<< porcmedOroeq2;
  cout<<"%"<< endl;
  cout<<"\n  Total de nadadores que participaron en competencias del estilo Mariposa: "<<totcompetmarip<<endl;
  cout<<"\n  Porcentaje de nadadores que tiene el Equipo nro. 1\n"
	  <<"  respecto al total de nadadores que participaron en las competencias: "<< porcnadeq1;
  cout<<"%\n\n\t\t\t";
  system("pause");
}
