/*
 * principal.cpp
 *
 *  Created on: 23/02/2013
 *      Author: Gabriel
 *      Contar cuatos clintes de la tercera edad tiene un consumo mayor  a 200kb y que porcetaje representa
 */

#include<string>
#include <iostream>
#include <stdlib.h>
#include "Cliente.h"
#include "Compania.h"

using namespace std;

void IECliente (Cliente &elCliente);
void IControl (char &respuesta);
void ISalidaI (Cliente &elCliente, Compania &laCompania);
void ISalidaII (Cliente &elCliente, Compania &laCompania);

int main()
{
	Cliente elCliente;
	Compania laCompania;
	char respuesta;
	respuesta='s';
	while (respuesta=='s'or respuesta=='S')
	{
		laCompania.CalContCl();
		IECliente (elCliente);
		laCompania.CalcCantTEM(elCliente);
		laCompania.DetContClTE(elCliente);
		laCompania.CalContM(elCliente);
		laCompania.CalAcumTotP(elCliente);
		laCompania.DetMayor(elCliente);
		laCompania.DetMenor(elCliente);
		ISalidaI (elCliente, laCompania);
		IControl (respuesta);
	}
	ISalidaII (elCliente, laCompania);
	return 0;
}

void IECliente (Cliente &elCliente)
{
	int laCedula;
	float elValorI, elValorF, laCantM;
	cout<<"Ingrese la c�dula "<<endl;
	cin>>laCedula;
	elCliente.setCedula(laCedula);
	cout<<"ingrese el valor inicial del medidor"<<endl;
	cin>>elValorI;
	elCliente.setValorI(elValorI);
	cout<<"ingrese el valor final del medidor"<<endl;
	cin>>elValorF;
	elCliente.setValorF(elValorF);
	cout<<"ingrese la cantidad m�xima"<<endl;
	cin>>laCantM;
	elCliente.setCantMax(laCantM);
}

void IControl (char &respuesta)
{
	cout<<"�Hay otro cliente? S/N"<<endl;
	cin>>respuesta;
}
void ISalidaI (Cliente &elCliente, Compania &laCompania)
{
	cout<<laCompania.DetCond(elCliente)<<", El Total a pagar es de Bs. "<<laCompania.CalcTotalPagar(elCliente)<<endl;
	cout<<laCompania.DetContExc(elCliente)<<endl;


}
void ISalidaII (Cliente &elCliente, Compania &laCompania)
{
	cout<<"El porcentaje de ahorros incompletos es de:  "<<laCompania.CalPorcAInc()<<"%, La cantidad de medidores nuevos que se han puesto en marcha es de: "<<laCompania.getContMedidores()<<endl;
	cout<<"El consumo m�s bajo fue de: "<<laCompania.getMenor()<<"Kw"<<endl;
	cout<<"y el m�s alto fue de: "<<laCompania.getMayor()<<"Kw"<<endl;
	cout<<laCompania.getContGExc()<<" cliente(s) ha(n) incurrido en un gasto energ�tico"<<endl;
	cout<<"El promedio de bol�vares facturados este mes ha sido de Bs. "<<laCompania.CalcMontoProm()<<endl;
	cout<<"La compa��a tiene : "<<laCompania.getContClTE()<<" cliente(s) de la tercera edad"<<endl;
    cout<<"La compa�ia tiene : "<<laCompania.getContTEM200()<<"cliente(s) de la tercera edad mayores a 200kw"<<endl;
    cout<<"El porcentaje que representa los clientes de tercera edad con consumo mayores a 200kb es de :"<<laCompania.CalcPorcTEM()<<"%"<<endl;
}
