/*
 * Autor: Pedro Gabriel Leal
 */

#include "MEmpresa.h"
MEmpresa::MEmpresa()
{
	contDepor = 0;
	contPc = 0;
	contElec = 0;
}

void MEmpresa::SetcontDepor(int cdepor)
{
	contDepor = cdepor;
}
int MEmpresa::GetcontDepor()
{
	return contDepor;
}
void MEmpresa::SetcontPc(int cpc)
{
	contPc = cpc;
}
int MEmpresa::GetcontPc()
{
	return contPc;
}
void MEmpresa::SetcontElec(int cele)
{
	contElec = cele;
}
int MEmpresa::GetcontElec()
{
	return contElec;
}
void MEmpresa::ProcesarArticulo(MAlto mal)
{
	if(mal.GetTipoAr() == 1)
		contDepor ++;
	if(mal.GetTipoAr() == 2)
		contPc++;
	if(mal.GetTipoAr() == 3)
		contElec++;

}
string MEmpresa::Mayor()
{
	string po = "";
	int mayor;
	mayor = contDepor;
	if(contPc > mayor)
		mayor = contPc;
	if (contElec > mayor )
		mayor = contElec;
	if(mayor == contDepor)
		po = "Articulos Deportivos. ";
	if (mayor == contPc)
		po = po + "Computadoras Personales. ";
	if (mayor == contElec)
		po = po + "Articulos Electronicos. ";
	return po;
}
