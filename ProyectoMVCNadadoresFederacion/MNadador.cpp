/*  MNadador.cpp
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */
#include "MNadador.h"

MNadador::MNadador()
{
	ctmedallas = 0;
}
void MNadador::SetCedula(string c)
{
   cedula = c;
}
void MNadador::SetNombre(string n)
{
   nombre = n;
}
void MNadador::SetEquipo(int eq)
{
   equipo = eq;
}
void MNadador::SetCtMedallas(int ct)
{
   ctmedallas = ct;
}
string MNadador::GetCedula()
{
   return cedula;
}
string MNadador::GetNombre()
{
   return nombre;
}
int MNadador::GetEquipo()
{
   return equipo;
}
int MNadador::GetCtMedallas()
{
   return ctmedallas;
}
// El nadador va actualizando su contador de medallas
void MNadador::ProcesarCompetencia(MCompetencia compe)
{
	if (compe.GetLugar() < 4)
     ctmedallas++;
}




