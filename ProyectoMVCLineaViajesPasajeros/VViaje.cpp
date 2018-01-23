/*
 * VViaje.cpp
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VViaje.h"

VViaje::VViaje() {
	// TODO Auto-generated constructor stub

}

string VViaje::LeerPlaca()
{
   string pl;
   cout<<"\tPlaca del autobus: ";
   cin.sync();
   getline(cin,pl);
   return pl;
}

int VViaje::LeerCuidadDestino()
{
int cd;
		do
		{
			cout<<"\tCiudad Destino (1. Valencia, 2. Maracay  3.Caracas): ";
			cin>>cd;
			if(cd<1 or cd>3)
		    cout<<"Dato no valido!"<<endl;
		}
		while(cd<1 or cd>3);
		return cd;
}

int VViaje::LeerHoraSalida()
{
int hsal;
		do
		{
			cout<<"\tHora de salida [0..18]: ";
			cin>>hsal;
			if(hsal<0 or hsal>18)
		    cout<<"Dato no valido!"<<endl;
		}
		while(hsal<0 or hsal>18);
		return hsal;
}

int VViaje::LeerCantidadPasajeros()
{
	float cp;
			do
			{
				cout<<"\tCantidad de Pasajeros: ";
				cin>>cp;
				if(cp < 0)
				cout<<"Dato no valido!"<<endl;
			}
			while(cp < 0);
			return cp;
}

void VViaje::ImprimirViaje(string placa, string turno,float montototviaje)
{
	system("cls");
	cout<<"INFORMACION DEL VIAJE"<<endl;
	cout<<"========================"<<endl;
	cout<<" Placa: "<<placa<<endl;
	cout<<" Turno : "<<turno<<endl;
	cout<<" Monto del viaje: "<<setiosflags(ios::fixed)<<setprecision(2)<<montototviaje <<endl;
	system("pause");
}
