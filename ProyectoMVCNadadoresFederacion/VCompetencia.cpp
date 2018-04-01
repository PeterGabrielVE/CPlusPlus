/*
 *  VCompetencia.cpp
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */

#include "VCompetencia.h"

VCompetencia::VCompetencia(){}

// Lee y valida el estilo de la competencia (valor del 1 al 4)
int VCompetencia::LeerEstilo()
{
   int e;
   do
    {  cout << "Estilo (1.Mariposa, 2.Espalda, 3.Pecho, 4.Libre): ";
       cin >> e;
       if (e<1 or e>4)
          cout<<"\n Dato no valido!"<<endl;
        } while (e<1 or e>4);
        return e;
}
// Lee el tiempo en segundos que tuvo el nadador en la competencia
float VCompetencia::LeerTiempo()
{
   float t;
   cout << "Tiempo: ";
   cin >> t;
   return t;
}
// Lee y valida el lugar en el que llego el nadador (valor mayor que cero)
int VCompetencia::LeerLugar()
{
   int lu;
   do
    {  cout << "Lugar (1.Oro, 2.Plata 3.Bronce Mas de 4: Nada): ";
       cin >> lu;
       if (lu<1)
          cout<<"\n Dato no valido!"<<endl;
     } while (lu<1);
    return lu;
}
