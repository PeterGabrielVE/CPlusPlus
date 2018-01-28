/*
 * empresa.cpp
 *
 *  Created on: 22/07/2012
 *      Author: Pedro
 */

#include "empresa.h"

void empresa::setAVendedores(vendedor elVendedor)
{
	AVendedores[ptr] = elVendedor;
	ptr++;
}
vendedor empresa::getAVendedores(int i)
{
	return AVendedores[i];
}
void empresa::setPtr(int elPtr)
{
	ptr = elPtr;
}
int empresa::getPtr()
{
	return ptr;
}
float empresa::calcularPromV()
{
		float promV = 0.00;
		float acumM= 0.00;
		for(int i=0; i<ptr; i++)
			{
				acumM = acumM + AVendedores[i].getTotalV();
			}
		if(ptr>0)
			promV = acumM/ptr;
		return promV;

}
float empresa::calcularComision(vendedor elVendedor)
{	float elProm = calcularPromV();
	float laCom;
		if(elVendedor.getTotalV() > elProm)
			laCom= elVendedor.getTotalV()* 0.15;

		else
			laCom= elVendedor.getTotalV()* 0.10;
	
	return laCom;
}
vendedor empresa::determinarMejorV()
{
	int posMejor= 0;
	for(int i=1; i<ptr; i++)
	{
		if(calcularComision(AVendedores[i]) > calcularComision(AVendedores[posMejor]))
			posMejor=i;
	}
	return AVendedores[posMejor];
}
float empresa::calcularComG()
{
	float acumCom = 0.0;
	for(int i=0; i<ptr; i++)
	{
	acumCom= acumCom + calcularComision(AVendedores[i]);
	}
	return acumCom;
}

empresa::empresa()
{
	ptr=0;
	// TODO Auto-generated constructor stub

}

