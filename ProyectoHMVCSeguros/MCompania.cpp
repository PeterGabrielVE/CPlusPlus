/*
 * MCompania.cpp
 * Author:Pedro Gabriel Leal
 */

#include "MCompania.h"

MCompania::MCompania()
{
                      
	acumvida=acumauto=0.00;
	contvida = contauto = contv50y70 =
    contplzarechazvida= contplzarechazauto=0;
}

//set

void MCompania::SetAcumvida(float acumv)
{
    acumvida = acumv;
}

void MCompania::SetAcumauto(float acuma)
{
    acumauto = acuma;
}

void MCompania::SetContvida(int contv)
{
    contvida = contv;
}

void MCompania::SetContauto(int conta)
{
    contauto = conta;
}

void MCompania::SetContv50y70(int cntv5070)
{
    contv50y70 = cntv5070;
}

void MCompania::SetContplzarechazvida(int cntrechazv)
{
    contplzarechazvida = cntrechazv;
}

void MCompania::SetContplzarechazauto(int cntrechaza)
{
    contplzarechazauto = cntrechaza;
}


//get


float MCompania::GetAcumvida()
{
    return acumvida;
}

float MCompania::GetAcumauto()
{
    return acumauto;
}

int MCompania::GetContVida()
{
    return contvida;
}

int MCompania::GetContAuto()
{
    return contauto;
}

int MCompania::GetContV50y70()
{
    return contv50y70;
}

int MCompania::GetContplzarechazvida()
{
    return contplzarechazvida;
}

int MCompania::GetContplzarechazauto()
{
    return contplzarechazauto;
}

//metodos propios
   //procesar

void MCompania::ProcesarVida(MVida mv)
{

	if(mv.GetEdad() >= 50 && mv.GetEdad() <=70)
	      ++contv50y70;

	if ( mv.GetEdad() <=80)
    {
      acumvida+=mv.GetCantAseg();
      ++contvida;
    }
    else
    	++ contplzarechazvida;

}

void MCompania::ProcesarAuto(MAuto ma)
{

	if ( ma.GetAnno()>=1998)
	    {
	      acumauto+=ma.GetCantAseg();
	      ++contauto;
	    }
	    else
	    	++ contplzarechazauto;

}

//metodos propios
   //calculos de porcentajes

float MCompania::CalcPorcVida50y70()
{
      if(contvida!=0)
       return (contv50y70 * 100) / contvida;
        else
         return 0.00;
}

float MCompania::CalcPorcRechazvida()
{
      if(contvida!=0)
       return ( contplzarechazvida* 100) / contvida;
        else
         return 0.00;
}

float MCompania::CalcPorcRechazauto()
{
      if(contauto!=0)
       return ( contplzarechazauto* 100) / contauto;
        else
         return 0.00;
}

//calculo del mayor de 2
string MCompania::CalcTipoPolizaMayor()
{
	if(contvida > contauto)
		return "Vida";
	else
		if(contauto > contvida)
			return "Automovil";
		else
			return "Son Iguales";
}
