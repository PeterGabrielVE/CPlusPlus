/*
 *  VFederacion.cpp
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */

#include "VFederacion.h"

VFederacion::VFederacion(){}

// Imprime los resultados de las jornadas
void VFederacion:: ImprimirResultadosJornadas(float porc1, int tmari, float porc2)

{
   system("cls");
   cout << "\n\n Porcentaje de medallas de oro del equipo nro. 2: "
		   << setiosflags(ios::fixed) << setprecision(2) << porc1 << endl;
   cout << "\n\n Total de competencias del estilo mariposa: " << tmari<< endl;
   cout << "\n\n Porcentaje de nadadores del equipo nro. 1 : "
		<< setiosflags(ios::fixed) << setprecision(2) << porc2 << endl << endl;
   system("pause");
}
void VFederacion::Imprimirmayor(string c)
{
	cout<<"El equipo que mayor medallas obtuvo es:"<<c<<endl;
	system("pause");
}
void VFederacion::Imprimircomp(int cp1)
{
	cout<<"Los perdedores son:"<<cp1<<endl;
	system ("pause");

}



