/*
 * VEmpresa.cpp
 *
 *  Created on: 30/10/2013
 *      Author: Pedro Gabriel Leal
 */

#include "VEmpresa.h"

VEmpresa::VEmpresa()
{
	// TODO Auto-generated constructor stub

}


void VEmpresa::ImprimirEmpresa(float PorcClie10,float menordscto)
{
	system("cls");
 cout<<"\t\t\tInformacion de la Empresa\n" ;
 cout<<"\t\t\t=========== == == =======\n\n" ;

 cout<<" Porcentaje de clientes con mas de 10 a�os comprando en la Empresa: "
     << setiosflags(ios::fixed) << setprecision(2)<< PorcClie10<<" %"<<endl;
 cout<<" Menor descuento otorgado: "
 << setiosflags(ios::fixed) << setprecision(2)<< menordscto<<endl;
 cout<<"\n\n\n                ";
 system("pause");
}
