/*
 *  VNadador.cpp
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 *  Ajustado: 19/03/2012
 */
#include "VNadador.h"

VNadador::VNadador(){}
// Lee la cedula del nadador
string VNadador::LeerCedula()
{
   string c;
   cout << "Cedula: ";
   cin.sync();
   getline(cin,c);
   return c;
}
// Lee el nombre del nadador
string VNadador::LeerNombre()
{
   string n;
   cout << "Nombre: ";
   cin.sync();  // blanquea el buffer para leer el string
   getline(cin,n);  // lee el string hasta el final de la linea
   return n;
}
// Lee y Valida el nro. del equipo (valor del 1 al 3)
int VNadador::LeerEquipo()
{
   int eq;
   do
    {  cout << "Equipo (1 al 3): ";
       cin >> eq;
       if (eq<1 or eq>3)
          cout<<"\n Dato no v\xa0lido!"<<endl;
        } while (eq<1 or eq>3);
        return eq;
}
// Imprime la informaci�n del nadador
void  VNadador::ImprimirNadador(string  c, string n, int tm)
{
   system("cls");
   cout << "INFORMACION DEL NADADOR" << endl;
   cout << "=======================" << endl;
   cout << "Cedula: " << c << endl;
   cout << "Nombre: " << n << endl;
   cout << "Total de Medallas Ganadas: " << tm << endl<< endl;
}
