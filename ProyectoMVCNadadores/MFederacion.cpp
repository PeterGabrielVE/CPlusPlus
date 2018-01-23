/*
 * Author: Pedro Gabriel Leal
 *
 */

#include "MFederacion.h"

MFederacion::MFederacion()
{
	contcompetmarip=contnadeq1=conttotnad=contoroeq2=conttotmed=0;
}


//set

void MFederacion::SetContCompetMarip(int ccm)
{
	contcompetmarip = ccm;
}

void MFederacion::SetContNadEq1(int cneq1)
{
	contnadeq1 =cneq1;
}

void MFederacion::SetContOroEq2(int coe2)
{
	contoroeq2 = coe2;
}

void MFederacion::SetContTotMed(int ctm)
{
	conttotmed = ctm;
}

 void MFederacion::SetContTotNad(int ctn)
{
	conttotnad=ctn;
}


//Get

int MFederacion::GetContCompetMarip()
{
	return contcompetmarip;
}

int MFederacion::GetContNadEq1()
{
	return contnadeq1;
}

int MFederacion::GetContOroEq2()
{
	return contoroeq2;
}

int MFederacion::GetContTotMed()
{
	return conttotmed;
}

int MFederacion::GetContTotNad()
{
	return conttotnad;
}

//procesar
void MFederacion::ProcesarNadador(MNadador mn )
{
 ++conttotnad;

 if (mn.GetEquipo()==1)
  ++contnadeq1;

}

void MFederacion::ProcesarCompetNadador(MNadador mn, MCompetencia mc )
{
 if (mn.GetEquipo()==2 && mc.GetLugar()==1)
  ++contoroeq2;

 if (mc.GetEstilo()==1)
  ++contcompetmarip;

 if (mc.GetLugar()<=3)
   ++conttotmed;

}


//Metodos de calculos
float MFederacion::CalcPorcMedOroEq2()
  {
    float porc;
    if (conttotmed!=0)
     porc = contoroeq2 * 100 / conttotmed;
    else
      porc=0;
    return porc;
  }


float MFederacion::CalcPorcNadEq1()
{
  float porc;
  if (conttotnad!=0)
   porc = contnadeq1 * 100 / conttotnad;
  else
   porc=0;
  return porc;
}

