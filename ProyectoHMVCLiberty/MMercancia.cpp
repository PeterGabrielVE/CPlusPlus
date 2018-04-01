/*
 * Autor: Pedro Gabriel Leal
 */

#include "MMercancia.h"
MMercancia::MMercancia(){}

void MMercancia::SetNroGuia(string nguia)
{
	NroGuia = nguia;
}
string MMercancia::GetNroGuia()
{
	return NroGuia;
}
void MMercancia::SetDProducto(string dprod)
{
	DProducto = dprod;
}
string MMercancia::GetDProducto()
{
	return DProducto;
}
void MMercancia::SetPesoL(float plibra)
{
	PesoL = plibra;
}
float MMercancia::GetPesoL()
{
	return PesoL;
}
void MMercancia::SetPreDolar(float pdolar)
{
	PreDolar = pdolar;
}
float MMercancia::GetPreDolar()
{
	return PreDolar;
}
void MMercancia::SetDestinat(string dest)
{
	Destinat = dest;
}
string MMercancia::GetDestinat()
{
	return Destinat;
}
void MMercancia::SetTipoV(int tv)
{
	TipoV = tv;
}
int MMercancia::GetTipoV()
{
	return TipoV;
}
float MMercancia:: CalcularFlete()
{
	if(PesoL <= 0.5 )
		return PreDolar*0.15*4.3;
	else
	if(PesoL >= 0.51 and PesoL <= 1)
		return PreDolar*0.2*4.3;
	else
		return PreDolar*0.25*4.3;
}
float MMercancia::LibraAdic()
{
	if (PesoL > 3)
			return (PesoL - 3) * 27;
	else
		return 0;
}
