/*
 * principal.cpp
 *
 *  Created on: 04/03/2013
 *      Author: Pedro Gabriel Leal
 *
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Compania.h"
#include "Productor.h"

using namespace std;

bool IEntrada(Compania &laComp);
void ISalida(Compania laComp);

int main()
{
	Compania laComp;
	bool PuedeCont;
	char Resp;
	Resp='s';
	while (Resp=='s' or Resp=='S')
	{
		PuedeCont=IEntrada(laComp);
		if (PuedeCont)
		{
			cout<<"�Desea incluir otro productor?";
			cin>>Resp;
		}
		else
		{
			cout<<"No se pueden procesar el arreglo esta lleno, favor comun�quese con el administrador"<<endl;
			Resp='n';
		}
	}
	laComp.CalAcumMontoC();
	laComp.setcontProductores();
	laComp.calcularPoercentaje();
	ISalida(laComp);
	return 0;
}


bool IEntrada(Compania &laComp)
{
	Productor elProd;
	bool PuedeCont;
	float MCobrarAux;

	string Ced;
	cout<<"Ingrese la cedula: "<<endl;
	cin.sync();
	cin>>Ced;
	elProd.setCedula(Ced);

	float MonHCM;
	cout<<"ingrese el monto vendido de HCM: "<<endl;
	cin.sync();
	cin>>MonHCM;
	elProd.setMontoHCM(MonHCM);

	float MVid;
	cout<<"ingrese el monto vendido de seguros de vida: "<<endl;
	cin.sync();
	cin>>MVid;
	elProd.setMontoVida(MVid);

	laComp.CalcMontoVentas(elProd);

	cout<<"el productor vendi� "<<laComp.CalCantVid(elProd)<<" p�lizas de vida"<<endl;
	laComp.CalCantPolVid(elProd);

	laComp.CalComision(elProd);
	laComp.CalcBono(elProd);
	laComp.setContProdBono(elProd);

	MCobrarAux=laComp.CalcMontoPagar(elProd);
	cout<<"cobrar� un total de  Bs. "<<MCobrarAux<<endl;
	cin.sync();
	elProd.setMontoCobrar(MCobrarAux);

	PuedeCont=laComp.CargarProduc(elProd);
	return PuedeCont;

}

void ISalida(Compania laComp)
{
	cout<<laComp.CalcPorcBono()<<"% tuvieron bonificaci�n"<<endl;
	cout<<"En total se vendieron "<<laComp.getCantPolVida()<<" p�lizas de vida"<<endl;
	cout<<laComp.getAcumMontoC()<<endl;
	cout<<"los productores que vendieron mas de 18000 bolivares en hcm: "<<laComp.getcontproductores()<<endl;
	cout <<" y el porcentaje que representan es : "<<laComp.calcularPoercentaje()<<" %"<<endl;
	cout<<"promedio pagado es: "<<laComp.CalcMontoPromedio()<<" Bolivares "<<endl;
	laComp.OrdenarProd();

}
