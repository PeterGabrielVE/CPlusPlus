/*  MCompetencia.cpp
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */
#include "MCompetencia.h"

MCompetencia::MCompetencia(){}

void MCompetencia::SetEstilo(int e)
{
	estilo = e;
}
void MCompetencia::SetTiempo(float t)
{
	tiempo = t;
}
void MCompetencia::SetLugar(int l)
{
	lugar = l;
}
int MCompetencia::GetEstilo()
{
	return estilo;
}
float MCompetencia::GetTiempo()
{
	return tiempo;
}
float MCompetencia::GetLugar()
{
	return lugar;
}
