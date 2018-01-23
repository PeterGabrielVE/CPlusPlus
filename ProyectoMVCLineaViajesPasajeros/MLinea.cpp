/*
 * MLinea.cpp
 *
 *  Created on: 21/10/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MLinea.h"

MLinea::MLinea() {
   contcaracas=0;
   acummanana=acumtarde=0;
}

//set
void MLinea::SetContcaracas(int cc)
{
    contcaracas = cc;
}

void MLinea::SetAcummanana(float acm)
{
    acummanana = acm;
}

void MLinea::SetAcumtarde(float act)
{
    acumtarde = act;
}

//get
int MLinea::GetContcaracas()
{
    return contcaracas;
}

float MLinea::GetAcummanana()
{
    return acummanana;
}

float MLinea::GetAcumtarde()
{
    return acumtarde;
}

//metodos de calculos
void MLinea::ProcesarViaje(MViaje mv)
{
	if (mv.GetCiudad()==3 )
		++contcaracas;

	if(mv.GetHoraSalida()<=12)
		acummanana+=mv.CalcMontoTotViaje();
	else
		acumtarde+=mv.CalcMontoTotViaje();

}

string MLinea::CalcTurnoMenosIngreso()
{
	if (acummanana < acumtarde)
		return "Ma�ana";
	  else
		if (acumtarde < acummanana)
				return "Tarde";
		else
			return "por  igual, Ma�ana y Tarde";

}




