/*
 * Author: Pedro Gabriel Leal
 *
 */


#include "MNadador.h"

MNadador::MNadador(){}



//set
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

void MNadador::SetContMedGan (int cmg)
{
 contmedgan=cmg;
}

void MNadador::ProcesarCompetencia (MCompetencia mc)

{
	if (mc.GetLugar()>=1 && mc.GetLugar()<=3)
	  ++contmedgan;
}

//get

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

int MNadador::GetContMedGan()
{
 return contmedgan;
}
