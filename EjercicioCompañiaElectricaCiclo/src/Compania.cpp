/*
 * Compania.cpp
 *
 *  Created on: 23/02/2013
 *      Author: Gabriel
 */

#include "Compania.h"

Compania::Compania() {
	ContCl=0;
	ContMedidores=0;
	ContAInc=0;
	ContGExc=0;
	Mayor=0;
	Menor=999999;
	AcumTotP=0;
	ContClTE=0;

}

string Compania::DetCond(Cliente elCliente)
{
	string Condicion;
	if (CalcTotal (elCliente)<=elCliente.getCantMax())
		Condicion="Ahorro Completo";
	else
	{
		Condicion="incompleto";
		ContAInc=ContAInc+1;
	}
	return Condicion;
}



int Compania::getContAInc()
{
	return ContAInc;
}



void Compania::CalContCl()
{
	ContCl=ContCl+1;
}



int Compania::getContCl()
{
	return ContCl;
}



void Compania::CalContM(Cliente elCliente)
{
	if(elCliente.getValorI()==0)
		ContMedidores=ContMedidores+1;
}



int Compania::getContMedidores()
{
	return ContMedidores;
}



float Compania::CalPorcAInc()
{
	float PorcI;
	PorcI=(ContAInc*100)/ContCl;
	return PorcI;
}

float Compania::CalcTotal(Cliente elCliente)
{
	float Total;
	Total=elCliente.getValorF()-elCliente.getValorI();
	return Total;
}

void Compania::DetMayor(Cliente elCliente)
{
	if (CalcTotal (elCliente )>Mayor)
		Mayor=CalcTotal (elCliente);
}

float Compania::getMayor()
{
	return Mayor;
}

void Compania::DetMenor(Cliente elCliente)
{
	if (CalcTotal (elCliente)<Menor)
		Menor=CalcTotal(elCliente);
}

float Compania::getMenor()
{
	return Menor;
}

string Compania::DetContExc(Cliente elCliente)
{
	string Cond;
	if (CalcTotal(elCliente)>elCliente.getCantMax()+150)
	{
		Cond="El cliente ha incurrido en un gasto energético";
		ContGExc=ContGExc+1;
	}
	return Cond;
}

int Compania::getContGExc()
{
	return ContGExc;
}

void Compania::CalAcumTotP(Cliente elCliente)
{
	AcumTotP=AcumTotP+CalcTotalPagar(elCliente);
}

float Compania::getAcumTotP()
{
	return AcumTotP;
}

float Compania::CalcTotalPagar(Cliente elCliente)
{
	float TotalP;
	if (CalcTotal(elCliente)>=250)
		TotalP=(250*5)+((CalcTotal(elCliente)-250)*9.5);
	else
		TotalP=CalcTotal(elCliente)*5;
	return TotalP;
}

void Compania::DetContClTE(Cliente elCliente)
{
	if (elCliente.getCedula()<=4000000)
		ContClTE=ContClTE+1;
}

int Compania::getContClTE()
{
	return ContClTE;
}

float Compania::CalcMontoProm()
{
	float Promedio;
	Promedio=AcumTotP/ContCl;
	return Promedio;
}









