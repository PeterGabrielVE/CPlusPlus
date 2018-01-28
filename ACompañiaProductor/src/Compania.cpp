/*
 * Compania.cpp
 *
 *  Created on: 07/03/2013
 *      Author: Gabriel
 */

#include "Compania.h"

Compania::Compania()
{
	ptr=0;
}

int Compania::getPtr() {
	return ptr;
}

void Compania::setAPolizas(Polizas laPolizas)
{
	APolizas[ptr]=laPolizas;
	ptr++;
}

Polizas Compania::getAPolizas(int i)
{
	return APolizas[i];
}


float Compania::CalcTotalPolizas()
{
	float acum=0.00, TotalP;
	for(int i=0;i<ptr;i++)
	{
		acum=acum+APolizas[i].CalcMontoTotal();
	}
	TotalP=acum;
	return TotalP;
}


void Compania::OrdenarPolizas() {
	Polizas laPoliza;
	int i,j;
	for(i=0;i<ptr-1;i++)
	{
		for(j=i+1;j<ptr;j++)
		{
			if(APolizas[i].CalcMontoTotal()>APolizas[j].CalcMontoTotal())
			{
				laPoliza=APolizas[i];
				APolizas[i]=APolizas[j];
				APolizas[j]=laPoliza;
			}
		}
	}
}

int Compania::BuscarNombre(string NomB) {
	int i=0, enc=-1;
	while(i<ptr && enc==-1)
	{
		if(APolizas[i].getNombre()==NomB)
			enc=i;
		else
			i++;
	}
	return enc;
}

float Compania::CalPromedioT()
{
	float prom;
	prom=CalcMontoPagar()/ptr;
	return prom;
}


float Compania::CalPorcentajeV()
{
	float porcV;
	int contV=0;
	for(int i=0;i<ptr;i++)
	{
		if(APolizas[i].getTipoP()=='2')
			contV++;
	}
	porcV=contV*100/ptr;
	return porcV;
}

float Compania::CalcMontoPagar()
{
	float MontoPagar,AcumMontoP=0.00,SueldoB=3000;
    for(int i=0;i<ptr;i++)
	{
		AcumMontoP=AcumMontoP+APolizas[i].DetBonificacion() +SueldoB + APolizas[i].CalComision();
	}
	return MontoPagar=AcumMontoP;
}

float Compania::CalcPorcPB()
{
	float PorcPB=0.00;
	int ContPB=0;
	for(int i=0;i<ptr;i++)
	{
		if(APolizas[i].getCantPolizaV()>5)
			ContPB++;
	}
	return PorcPB=(ContPB*100)/ptr;
}

int Compania::CalcCantPolizasV()
{
	int AcumPolizasV=0;
	for(int i=0;i<ptr;i++)
	{
		AcumPolizasV=AcumPolizasV + APolizas[i].getCantPolizaV();
	}
	return AcumPolizasV;
}

float Compania::CalcMontoCobrar()
{
	float MontoCobrar,Sueldo=3000;
	for(int i=0;i<ptr;i++)
	{
		MontoCobrar=APolizas[i].CalComision()+ Sueldo + APolizas[i].DetBonificacion();
	}
	return MontoCobrar;
}









