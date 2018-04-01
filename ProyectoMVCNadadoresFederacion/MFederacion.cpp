/*
 * MFederacion.cpp
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */
#include "MFederacion.h"

// Constructor que inicializa los atributos en cero
MFederacion :: MFederacion()
{
	ctnadador = 0;
	cteq2oro = 0;
	ctmariposa = 0;
	cteq1 = 0;
	ctotalmedallas = 0;
	c1=0;
	c2=0;
	c3=0;
	cp=0;
}

void MFederacion :: SetCtNadador(int c1)
{
	ctnadador = c1;
}
void MFederacion :: SetCtEq2Oro(int c2)
{
	 cteq2oro = c2;
}
void MFederacion :: SetCtMariposa(int c3)
{
	ctmariposa = c3;
}
void MFederacion :: SetCtEq1(int c4)
{
	cteq1 = c4;
}
void MFederacion :: SetCtotalMedallas(int c5)
{
	ctotalmedallas = c5;
}
int MFederacion :: GetCtNadador()
{
	return ctnadador;
}
int MFederacion :: GetCtEq2Oro()
{
	return cteq2oro;
}
int MFederacion :: GetCtMariposa()
{
	return ctmariposa;
}
int MFederacion :: GetCtEq1()
{
	return cteq1;
}
int MFederacion :: GetCtotalMedallas()
{
	return ctotalmedallas;
}
/* Actualiza los atributos ctmariposa, ctotalmedallas y cteq2oro
    Relaci�n de uso con MNadador y MCompetencia  */
void MFederacion :: ProcesarJornadas(MNadador nada, MCompetencia compe) // Relacion uso con MNadador y MCompetencia
{
   if (compe.GetEstilo()== 1)
	   ++ctmariposa;
   if (compe.GetLugar()<4)
	   ++ctotalmedallas;
   if ((nada.GetEquipo()==2) and (compe.GetLugar() == 1))
	   ++cteq2oro;
   if ((nada.GetEquipo()==1) and (compe.GetLugar()<4))
	   c1=c1+1;
   if ((nada.GetEquipo()==2) and (compe.GetLugar()<4))
	   c2=c2+1;
   if ((nada.GetEquipo()==3) and (compe.GetLugar()<4))
	   c3=c3+1;
   if ((compe.GetLugar()==4) and (nada.GetEquipo()<=3))
	   cp=cp+1;


}
// Actualiza los atributos ctnadador y cteq1. Relaci�n uso con MNadador
void MFederacion :: ProcesarNadador(MNadador nada) 
{
   ++ctnadador;
   if (nada.GetEquipo()==1)
	  ++cteq1;

}
// Porcentaje de medallas de oro que gan� el equipo nro. 2.
float MFederacion :: PorcentajeOroEq2()
{
	if (ctotalmedallas > 0)
       return (cteq2oro * 100 / ctotalmedallas);
	return 0;
}
// Porcentaje de nadadores que tiene el equipo nro. 1
float MFederacion :: PorcentajeNadaEq1()
{
	if (ctnadador > 0)
       return (cteq1 * 100 / ctnadador);
	return 0;
}
void MFederacion::setc1(int c11)
{
	c1=c11;
}
   void MFederacion::setc2(int c22)
   {
	   c2=c22;
   }
   void MFederacion::setc3(int c33)
   {
	   c3=c33;
   }
   int MFederacion::getc1()
		{
	   return c1;
		}
   int MFederacion::getc2()
   {
	   return c2;

   }
   int MFederacion::getc3()
   {
	   return c3;
   }

string MFederacion::mayor()
{
	string c;
	if (c1>c2 and c1>c3)
		return c="Equipo 1";
	else
	if (c2>c3 and c2>c1)
		return c="Equipo 2";
	else
	if (c3>c1 and c3>c2)

		return c="Equipo 3";
	else
				if (c1==c2 and c1>c3)

					return c="Equipo 1 y Equipo 2";
				else
	if (c2==c3 and c2>c1)
		return c="Equipo 2 y Equipo 3";
	else
	if (c1==c3 and c1>c2)
		return c="Equipo 1 y Equipo 3";
	else
	if (c1==c3 and c1==c2)
		return c="Equipo 1,Equipo 2 y Equipo3";
	return c;
	}

void MFederacion::setcp(int cp1)
{
	cp=cp1;
}
int MFederacion::getcp()
{
	return cp;
}
