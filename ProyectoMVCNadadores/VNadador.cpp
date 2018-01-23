/*
 * Author: Pedro Gabriel Leal
 *
 */

#include "VNadador.h"

VNadador::VNadador(){}


string VNadador::LeerCedula()
{
    	string ced;
		cout<<"\tCedula: ";
		cin.sync();
		getline(cin,ced);
	    return ced;
}

string VNadador::LeerNombre()
{
    	string nom;
		cout<<"\tNombre: ";
		cin.sync();
		getline(cin,nom);
	    return nom;
}

int VNadador::LeerEquipo()
{
	int eq;
		do
		{
			cout<<"\tEquipo [1,2,3]: ";
			cin>>eq;
			if(eq < 1 or eq > 3)
			 cout<<"Dato no valido!"<<endl;
		}
		while(eq<1 or eq>4);
		return eq;
}


void VNadador::ImprimirNadador (string c,string n,int totmedgan)
{
   system("cls");
   cout<<"\n\n\tINFORMACION DEL NADADOR\n",
   cout<<"\t_______________________\n\n";

   cout<< "\n\tCedula: "<<c;
   cout<<"\n\tNombre: "<< n ;
   cout<<"\n\tTotal Medallas Ganadas: "<< totmedgan;
   cout<<"\n\n\t\t";
   system("pause");

}
