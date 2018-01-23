/*
 * Author: Pedro Gabriel Leal
 *
 */

#include "VVendedor.h"

VVendedor::VVendedor(){}

string VVendedor::LeerCedula()
{
   string ced;
   cout << "\tCedula: ";
   cin >>ced;
   return ced;
}
      
string VVendedor::LeerNombre()
{
   string nom;
   cout<<"\tNombre: ";
   cin.sync();
   getline(cin,nom);
   return nom;
}

float VVendedor::LeerSueldobase()
{
   float sueldob;
   do{
      cout << "\tSueldo Base: ";
      cin >> sueldob;
      if(sueldob <0)
	   cout<<"\tDato no valido\n";
   }while(sueldob<0);
   return sueldob;
}

float VVendedor::LeerMontoventas()
{
   float montov;
   do{
      cout << "\tMonto Ventas: ";
      cin >> montov;
      if(montov <0)
      	cout<<"\tDato no valido\n";
     }while(montov < 0);
   return montov;
}

void VVendedor::ImprimirVendedor (string c,string n,
                                  float co, float sn)
{
   system("cls");
   cout << "\n\n\tINFORMACION DEL VENDEDOR" << endl;
   cout << "\t========================" << endl;
   cout << "\n\tCedula: " << c << endl;
   cout << "\tNombre: " << n << endl;
   cout << "\tComision de Ventas: " << setiosflags(ios::fixed) << setprecision(2) << co << endl;
   cout << "\tSueldo Neto: "  << setiosflags(ios::fixed) << setprecision(2) << sn <<  endl;
   system("pause");
}
