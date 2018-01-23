/*
 * Author: Pedro Gabriel Leal
 *
 */

#include "MCompetencia.h"

MCompetencia::MCompetencia(){}

MCompetencia::MCompetencia (int est, int lug, float tiem)
{
   estilo = est;
   lugar = lug;
   tiempo = tiem;
}

void MCompetencia::SetEstilo (int est)
{
   estilo = est;
}

void MCompetencia::SetLugar(int lug)
{
   lugar = lug;
}

void MCompetencia::SetTiempo(float tiem)
{
   tiempo = tiem;
}

int MCompetencia::GetEstilo()
{
   return estilo;
}

int MCompetencia::GetLugar()
{
   return lugar;
}

float MCompetencia::GetTiempo()
{
   return tiempo;
}
