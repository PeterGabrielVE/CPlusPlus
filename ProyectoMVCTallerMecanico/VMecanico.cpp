/*
 * VMecanico.cpp
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#include "VMecanico.h"

VMecanico::VMecanico(){}

// Lee el dato c�dula de identidad
string VMecanico::LeerCedula()
{
   string c;
   cout << "Cedula: ";
   cin >> c;
   return c;
}

// Lee el dato nombre
string VMecanico::LeerNombre()
{
   string n;
   cout << "Nombre: ";
   cin.sync(); // blanquea el buffer de entrada
   getline(cin,n);  // lee el string hasta el final de la linea
   return n;
}

/* Lee y valida el dato cantidad de reparaciones.
   NOTA: Se considera que un mecanico puede tener cero reparaciones
         lo cual indica que no trabajo  */
int VMecanico::LeerCantidadReparaciones()
{
   int c;
   do
      { cout << "Cantidad de Reparaciones realizadas: ";
        cin >> c;
        if (c < 0)
            cout<<"\n Dato no valido!"<<endl;
       }while (c < 0);

   return c;
}

// Muestra la informaci�n del mec�nico
void VMecanico::ImprimirMecanico(string c, string n, float com,float m)
{
   system("cls"); // blanquea � limpia la pantalla
   cout << "INFORMACION DEL MECANICO" << endl;
   cout << "========================" << endl;
   cout << "Cedula: " << c << endl;
   cout << "Nombre: " << n << endl;
   cout << "Comision: " << setiosflags(ios::fixed) << setprecision(2) << com << " Bs" << endl << endl;
   cout << "Mayor Comision por reparaci�n: "<< setiosflags(ios::fixed)<< setprecision(2)<< m<< "BsF."<< endl;
   system("pause"); // hace una pausa, un espere
}

