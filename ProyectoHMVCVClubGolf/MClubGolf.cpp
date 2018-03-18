/*
 * MClubGolf.cpp
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal
 */

#include "MClubGolf.h"

MClubGolf::MClubGolf() {
	// TODO Auto-generated constructor stub

}

void MClubGolf::IncluirArea(MArea ma)
{
	vecareas.push_back(ma);

}

int MClubGolf::CantAreas()
{
	return vecareas.size();
}

void MClubGolf::SetArea(MArea ma, int posi)
{
	vecareas[posi]=ma;
}

MArea MClubGolf::GetArea(int i)
{
	return vecareas[i];
}

void MClubGolf::IncluirServicio(MArticulo ms)
{
	vecservicios.push_back(ms);
}



int MClubGolf::CantServicios()
{
	return vecservicios.size();
}



void MClubGolf::SetServicio(MArticulo ms, int posi)
{
	vecservicios[posi]=ms;
}



MArticulo MClubGolf::GetServicio(int i)
{
	return vecservicios[i];
}



int MClubGolf::BuscvarServicio(string cod)
{
	for (int i=0; i<CantServicios(); ++i)
		if (cod==vecservicios[i].GetCodigo())
			return i;
	return -1;
}



void MClubGolf::Procesar(int posi)
{
	float precio= vecservicios[posi].GetPvp();
	int tipo= vecservicios[posi].GetTipo();//es el mismo atributo area
	vecareas[tipo-1].Actualizar(precio);
}


string MClubGolf:: DetAreaEnLetras(int i)
{
	string area;
	switch(i)
	{
	  case 0: area="Piscina";
	  break;
	  case 1: area="Mezzanina";
	  break;
	  case 2: area="Restaurant";
	  break;
	  case 3: area="Parque Infantil";
	  break;
	  case 4: area="Cancha de Tenis";
	  break;
	  case 5: area="Cancha de Bolas";
	  break;
	  case 6: area="Churuata";
	  break;
	}
	return area;
}

vector<string> MClubGolf::DetVecAreasEnLetras()
{
	vector<string> vauxnombreareas;

	for (int i=0; i<CantAreas(); ++i)

		vauxnombreareas.push_back(DetAreaEnLetras(i));
   return vauxnombreareas;
}





