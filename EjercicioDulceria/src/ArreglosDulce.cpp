/*
 * ArreglosDulce.cpp
 *
 *  Created on: 23/02/2013
 *      Author: Pedro Gabriel Leal
 */

#include "ArreglosDulce.h"
#include<iostream>





ArreglosDulce::ArreglosDulce()
{
	// TODO Auto-generated constructor stub
	AcumAzucar=0;
	Tamano=4;
	ContRaciones=0;
	ContCacaoyMant=0;
	ContNoCacao=0;



}

void ArreglosDulce::Inicializar()
{
	MenorR.setNombre("Nadie");
	MenorR.setCantRaciones(2000);
	MenorM.setCantMant(20000);
	MenorM.setNombre("Nadie");
	MayorM.setCantMant(0);
	MayorM.setNombre("Nadie");
}

void ArreglosDulce::GuardarPostre(Postres elpostre, int laposicion)
{
        ArrPostres[laposicion]=elpostre;
}

void ArreglosDulce::DetAcumAzucar(int laposicion)
{
	AcumAzucar=AcumAzucar+ArrPostres[laposicion].getCantAzucar();
}

float ArreglosDulce::CalcularProm()
{
	float Prom;
	Prom=AcumAzucar/Tamano;
	return Prom;
}

int ArreglosDulce::ContarMayores()
{

	int i;
	int Mayores;
	Mayores=0;
	float Promedio;
	Promedio=CalcularProm();
	for(i=0;i<Tamano;i=i+1)
	{
		if(ArrPostres[i].getCantAzucar()>Promedio)
			Mayores=Mayores+1;
	}
	return Mayores;


}

Postres ArreglosDulce::getMenorR()
{
	return MenorR;
}

int ArreglosDulce::getTamano()
{
	return Tamano;
}

void ArreglosDulce::DetMenor(Postres & elpostre)
{
	if (elpostre.getCantRaciones()<MenorR.getCantRaciones())
		MenorR=elpostre;
}

void ArreglosDulce::DetContRaciones(Postres elpostre)
{
	if(elpostre.getCantRaciones()<10)
		ContRaciones=ContRaciones+1;
}

Postres ArreglosDulce::getelpostre(int laposicion)
{
	return ArrPostres[laposicion];
}

float ArreglosDulce::CalPorcMenorR()
{
	float PorcMenorR;
	PorcMenorR=ContRaciones*100/Tamano;
	return PorcMenorR;
}

void ArreglosDulce::DetContNoCacao(Postres elpostre)
{
	if(elpostre.getCantCacao()<=0)
		ContNoCacao=ContNoCacao+1;

}

int ArreglosDulce::getCotNoCacao()
{
	return ContNoCacao;
}

void ArreglosDulce::DetContCacaoyMant(Postres elpostre)
{
	if(elpostre.getCantMant()>0 and elpostre.getCantCacao()>0)
		ContCacaoyMant=ContCacaoyMant+1;

}

int ArreglosDulce::getContCacaoyMant()
{
	return ContCacaoyMant;
}

void ArreglosDulce::DetMayorM(Postres elpostre)
{
	if(elpostre.getCantMant()>MayorM.getCantMant())
		MayorM =elpostre;
}

Postres ArreglosDulce::getMayorM()
{
	return MayorM;
}


Postres ArreglosDulce::getMenorM()
{
	return MenorM;
}


void ArreglosDulce::DetMenorM(Postres elpostre)
{
	if(elpostre.getCantMant()<MenorM.getCantMant())
		MenorM =elpostre;
}

float ArreglosDulce::CalTotalAR()
{
	float TotalAR;
	TotalAR=AcumAzucar*200;
	return TotalAR;
}

float ArreglosDulce::DetFaltante()
{
	float Faltante;
	{

    if(((AcumAzucar*200)/1000)<=15)

    	cout<<"Si hay suficiente azucar"<<endl;
    else
    {
    	Faltante=15-((AcumAzucar*200)/1000);
        cout<<"La cantidad faltante es:"<<Faltante<<"Kg"<<endl;
    }
	}



    return Faltante;
}

float ArreglosDulce::CalcCostoTotal()
{
	float CostoTotal;
	CostoTotal=(AcumAzucar*200)*1.25;
	return CostoTotal;
}

void ArreglosDulce::OrdenarMayor()
{
	Postres  elpostre;
	int Pos1,Pos2;
	for(Pos1=0;Pos1<Tamano;Pos1++)
	{
		for(Pos2=Pos1;Pos2<Tamano;Pos2++)
		{
			if(ArrPostres[Pos1].getCantRaciones()<ArrPostres[Pos2].getCantRaciones())
			{
				elpostre=ArrPostres[Pos1];
			    ArrPostres[Pos1]=ArrPostres[Pos2];
			    ArrPostres[Pos2]=elpostre;
			}

		}

	}
	for(Pos1=0;Pos1<Tamano;Pos1++)
	{

		cout<<ArrPostres[Pos1].getNombre()<<"         "<<ArrPostres[Pos1].getCantRaciones()<<endl;
	}
}
