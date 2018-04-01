/*
 * MSpa.cpp
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#include "MSpa.h"

MSpa::MSpa() {
	// TODO Auto-generated constructor stub

}

void MSpa::IncluirTratamiento(MTratamiento mt)
{
	vectratamientos.push_back(mt);
}



int MSpa::CantTratamientos()
{
	return vectratamientos.size();
}

void MSpa::SetTratamiento(MTratamiento mt, int posi)
{
	vectratamientos[posi]=mt;

}

MTratamiento MSpa::GetTratamiento(int i)
{
	return vectratamientos[i];
}

void MSpa::IncluirTerapia(MArticulo mterap)
{
	vecterapias.push_back(mterap);
}

int MSpa::CantTerapias()
{
	return vecterapias.size();
}

void MSpa::SetTerapia(MArticulo mterap, int posi)
{
	vecterapias[posi]= mterap;
}

MArticulo MSpa::GetTerapia(int i )
{
	return vecterapias[i];
}

void MSpa::Procesar( int positerapia, int posicliente)
{
 float precio= vecterapias[positerapia].GetPvp();
 int positratamiento= vecterapias[positerapia].GetTipo()-1;
 int estatus= vectratamientos[positratamiento].GetStatus();
 float descto;
 if (estatus==1)
   descto= precio*0.10;
   else
  descto=0;

  float montoapagar=precio-descto;

 vecclientes[posicliente].Actualizar(montoapagar);

}

int MSpa::BuscarTerapia(string codt)
{
	for(int i=0; i< CantTerapias(); ++i)
	 if(vecterapias[i].GetCodigo()==codt)
		 return i;
	return -1;
}


void MSpa::IncluirCliente(MCliente mc)
{
	vecclientes.push_back(mc);
}



int MSpa::CantClientes()
{
	return vecclientes.size();
}



void MSpa::SetCliente(MCliente mc, int posi)
{
	vecclientes[posi]=mc;
}



MCliente MSpa::GetCliente(int i)
{
	return vecclientes[i];
}



int MSpa::BuscarCliente(string ced)
{
	for(int i=0; i< CantClientes(); ++i)
		 if(vecclientes[i].GetCedula()==ced)
			 return i;
		return -1;

}

float MSpa::CalcMontoTotalIngresado()
{

	float ac=0;
	for(int i=0; i< CantClientes(); ++i)
	  ac+= vecclientes[i].GetAcummonto();
	return ac;
}


