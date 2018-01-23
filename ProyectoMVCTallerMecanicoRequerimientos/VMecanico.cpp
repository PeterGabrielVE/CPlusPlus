/*
 * VMecanico.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "VMecanico.h"

VMecanico::VMecanico()
{
	// TODO Auto-generated constructor stub

}
long VMecanico::LeerCedula()
{
   long ced;
   cout << "Cedula: ";
   cin >> ced;
   return ced;
}

string VMecanico::LeerNombre()
{
   string nom;
   cout << "Nombre: ";
   cin.sync();
   getline(cin,nom);
   return nom;
}

int VMecanico::LeerCantidadReparaciones()
{
   int crep;
   do
       {
	     cout << "Cantidad de Reparaciones realizadas: ";
	     cin >> crep;
         if (crep <0)
           cout<<"\n\tDato NO Valido! \n" << endl;
       } while ( crep<0);

   return crep;
}

void VMecanico::ImprimirMecanico(long c, string n, float com, float maymontocomis)
{
   system("cls");
   cout << "INFORMACION DEL MECANICO" << endl;
   cout << "========================" << endl;
   cout << "Cedula: " << c << endl;
   cout << "Nombre: " << n << endl;
   cout << "Comision: " << setiosflags(ios::fixed) << setprecision(2)
	    << com << " Bs" << endl;
   cout << "Mayor Comision del Mecanico: " << setiosflags(ios::fixed) << setprecision(2)
	    << maymontocomis << " Bs" << endl;
   system("pause");
}

