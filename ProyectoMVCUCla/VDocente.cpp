
#include "VDocente.h"

VDocente::VDocente() {}

string VDocente::LeerCedula()
{
   string c;
   cout << "\n Cedula: ";
   cin>>c;
   return c;
}

string VDocente::LeerNombre()
{
   string n;
   cout<<"\n Nombre: ";
   cin.sync();
   getline(cin,n);
   return n;
}

int VDocente::LeerCategoria()
{
	int t;
	do
	{
	   cout<<"\n Categoria (1)Contratado  (2)Ordinario:  ";
	   cin>>t;
	   if (t<1 or t >2)
		  cout<<"Dato no valido\n\n";
	}while(t<1 or t >2);

	   return t;
}

float VDocente::LeerSueldoMensual()
{
   float s;
   do
   	{
     cout << "\n Sueldo Mensual: " ;
     cin >> s;
     if (s<0)
   	   cout<<"Dato no valido\n\n";
   	}while(s<0);
   return s;
}


