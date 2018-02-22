/*
 * Compania.cpp
 *
 *  Created on: 04/03/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Compania.h"
#include <iostream>

Compania::Compania() {
	// TODO Auto-generated constructor stub
	Tamano=20;
	ptr=0;
	CantPolVid=0;
	ContProdBono=0;
	AcumMontoC=0;
	contarP=0;
}

bool Compania::CargarProduc(Productor elProd)
{
	bool PuedeCont;
	if (ptr<Tamano)
	{
		A_Prod[ptr]=elProd;
		ptr++;
		PuedeCont=true;
	}
	else
		PuedeCont=false;
	return PuedeCont;

}



Productor Compania::SacarProduc(int laPos)
{
	return A_Prod[laPos];
}


//Total de polizas vendidas
void Compania::CalCantPolVid(Productor elProd)
{
	CantPolVid+=CalCantVid(elProd);
}



int Compania::getCantPolVida()
{
	return CantPolVid;
}
//


float Compania::CalcMontoVentas(Productor elProd)
{
	return elProd.getMontoHCM()+elProd.getMontoVida();
}


//Bono
float Compania::CalcBono(Productor elProd)
{
	float bono;
	if (CalCantVid(elProd)>5){
		bono=CalCantVid(elProd)*185;
	}
	else
		bono=0;
	return bono;
}

void Compania::setContProdBono(Productor elProd)
{
	if (CalcBono(elProd)>0)
		ContProdBono++;
}

int Compania::getContProdBono()
{
	return ContProdBono;
}

float Compania::CalcPorcBono()
{
	float Porc;
	if(ptr>0)
		Porc=ContProdBono*100/ptr;
	else
		Porc=0;
	return Porc;
}

//
//4.	Cantidad de p�lizas de vida vendidas por el productor

float Compania::CalCantVid(Productor elProd)
{
	float CantV;
	CantV=elProd.getMontoVida()/2000;
	return CantV;
}



int Compania::getptr()
{
	return ptr;
}

int Compania::getTamano()
{
	return Tamano;
}
//Comision
float Compania::CalComision(Productor elProd)
{
	float com;
	if (CalcMontoVentas(elProd)<100000)
	{
		com=CalcMontoVentas(elProd)*0.03;

	}
	else
		com=CalcMontoVentas(elProd)*0.05;
	return com;
}


void Compania::CalAcumMontoC()
{
	for(int i=0; i<ptr;i++)
	{
		AcumMontoC+=A_Prod[i].getMontoCobrar();
	}
}
float Compania::getAcumMontoC()
{
	return AcumMontoC;
}

float Compania::CalcMontoPromedio()
{
	float MontoP;
	if(ptr>0)
		MontoP=AcumMontoC/ptr;
	return MontoP;

}





float Compania::CalcMontoPagar(Productor elProd)
{
	float tot;
	tot=3000+CalcBono(elProd)+CalComision(elProd);
	return tot;
}


void Compania::OrdenarProd()
{
	Productor elProd;
	for(int i=0; i<ptr; i++)
	{
		for(int j=i+1; j<ptr; j++)
		{
			if(A_Prod[i].getMontoCobrar()>A_Prod[j].getMontoCobrar())
			{
				elProd=A_Prod[i];
				A_Prod[i]=A_Prod[j];
				A_Prod[j]=elProd;
			}
		}
	}
	cout<<endl<<endl;

	for(int i=0; i<ptr; i++)
	{
		if(A_Prod[i].getMontoCobrar()<CalcMontoPromedio())
		{
			cout<<A_Prod[i].getCedula()<<"\t"<<A_Prod[i].getMontoCobrar()<<endl;
		}

	}
	cout<<"____________________________________________________________"<<endl;
	cout<<endl<<endl<<endl;
	cout<<"Mejores 3 Productores"<<endl;
	cout<<"Cedula"<<"\t"<<"Pago"<<"\t"<<"        Monto HCM"<<"\t"<<"Monto SEG VIDA"<<endl;
	for(int i=0; i<ptr;i++)
	{
		if(i>=ptr-3)
		cout<<A_Prod[i].getCedula()<<"\t"<<"Bs. "<<A_Prod[i].getMontoCobrar()<<"\t"<<"Bs "<<A_Prod[i].getMontoVida()<<"\t"<<"     Bs "<<A_Prod[i].getMontoHCM()<<endl;
	}
}

void Compania::setcontProductores()
{
	//.contar cuantos productores vendieron mas de 18000 en hcm y que porcentaje representan.
	int mayor=18000;
	for(int i=0; i<ptr; i++)
	{
		if (A_Prod[i].getMontoHCM()>mayor)
			contarP++;
	}
}



int Compania::getcontproductores()
{
 return contarP;
}



float Compania::calcularPoercentaje()
{
	  float por;
	  if(ptr>0)
	  por= (contarP*100)/ptr;

	  	else
	  	{
	  		por=0;

	  	}return por;

}



