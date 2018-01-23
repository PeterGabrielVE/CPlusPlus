/*
 * VHotel.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "VHotel.h"

VHotel::VHotel()
{
	// TODO Auto-generated constructor stub

}

void VHotel :: ImprimirHotel( float TotalAcM,float TotalAcT, float TotalAcS,float TotalAcC,
                              float PorcClie5,string HospPreferido)
{
system("cls");
cout<<"\t\t\tInformacion del hotel\n";
cout<<"\t\t\t======================\n\n";
cout<<"Monto ingresado por habitaciones matrimoniales:"<<setiosflags(ios::fixed)<<setprecision(2)<<TotalAcM<<endl;
cout<<"Monto ingresado por habitaciones triples:"<<setiosflags(ios::fixed)<<setprecision(2)<<TotalAcT<<endl;
cout<<"Monto ingresado por Suites:"<<setiosflags(ios::fixed)<<setprecision(2)<<TotalAcS<<endl;
cout<<"Monto ingresado por Cabannas:"<<setiosflags(ios::fixed)<<setprecision(2)<<TotalAcC<<endl;
cout <<"Porcentaje de Clientes con mas de 5 Dias:"<<setiosflags(ios::fixed)<<setprecision(2)<<PorcClie5<<" %"<<endl;
cout <<"Hospedaje mas Preferido entre Suites y Cabanas:"
     <<setiosflags(ios::fixed)<<setprecision(2)<<HospPreferido<<endl<<endl;
  system("pause");
}
