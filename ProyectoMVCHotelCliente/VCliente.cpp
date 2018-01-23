/*
 * VCliente.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "VCliente.h"

VCliente::VCliente()
{
	// TODO Auto-generated constructor stub

}

long VCliente :: LeerCedula()
{
     long ced;
     cout<<"Cedula:";
     cin>> ced;
     return ced;
}

int VCliente :: LeerCantDias()
{
    int CantD;
    cout<<"Cantidad de dias de hospedaje:";
    cin>> CantD;
    return CantD;
}

int VCliente :: LeerTipoHospedaje()
{
    int TipoH;
    cout<<"Tipo de hospedaje (1)Matrimonial (2)Triple (3)Suite (4)Cabanna:";
    cin>>TipoH;
    return TipoH;
}

void VCliente :: ImprimirCliente(long ced, int CantD, float MontoCanc)
{
     system("cls");
     cout<<"\t\t\tInformacion del cliente\n";
     cout<<"\t\t\t========================\n\n";
     cout<<"Cedula:"<<ced<<endl;
     cout<<"Cantidad de dias hospedado:"<<CantD<<endl;
     cout<<"Monto a cancelar:"<<setiosflags(ios::fixed)<<setprecision(2)<<MontoCanc<<endl;
     system("pause");
}
