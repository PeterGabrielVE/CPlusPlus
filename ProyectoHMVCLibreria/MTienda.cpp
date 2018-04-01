/*
 * MTienda.cpp
 *
 *  Created on: 02/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MTienda.h"

MTienda::MTienda() {
	tganancias=0;
	ctinter=0;
	ctlibrost=0;
	ctlibrosd=0;

}

void MTienda::SetTGanancia(float tg)
{
	tganancias=tg;
}
void MTienda::SetCtInter(int ci)
{
	ctinter=ci;
}

void MTienda::SetCtLibrosT(int ct)
{
	ctlibrost=ct;
}
void MTienda::SetCtLibrosD(int cd)
{
	ctlibrosd=cd;
}
float MTienda::GetTGanancia()
{
	return tganancias;
}
int MTienda::GetCtInter()
{
	return ctinter;
}

int MTienda::GetCtLibrosT()
{
	return ctlibrost;
}

int MTienda::GetCtLibrosD()
{
	return ctlibrosd;
}

void MTienda::ProcesarLIbrosT(MLTradicional mlt)
{
	++ctlibrost;
	SetTGanancia(GetTGanancia()+mlt.Ganancia2());




	if(mlt.GetTipoEnv()==2)
		++ctinter;

}

void MTienda::ProcesarLibrosD(MLDigital mld)
{
	++ctlibrosd;

	//tganancias =GetTGanancias()+ mld.Ganancia1();
}

float MTienda::Porcentaje()
{
	if(ctlibrost!=0)
		return ctinter*100/ctlibrost;
	else
		return 0;
}

string MTienda::MayorLibro()
{
	if(ctlibrost>ctlibrosd)
		return "Tradicional";
	else
		if(ctlibrosd>ctlibrost)
			return "Digital";
		else
			return "Tradicional y Digital";
}

