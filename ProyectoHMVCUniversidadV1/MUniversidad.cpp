/*
 * MUniversidad.cpp
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MUniversidad.h"
// Constructor que inicializa los atributos contadores y acumulador
MUniversidad :: MUniversidad()
{     acbonohorario = 0;
      ctdoctores = 0;
      ctcont = 0;
}
void MUniversidad::SetAcBonoHorario(int h)
{   acbonohorario = h; }

void MUniversidad :: SetCtDoctores(int c)
{   ctdoctores = c; }

void MUniversidad :: SetCtCont(int c)
{   ctcont = c; }

float MUniversidad :: GetAcBonoHorario()
{   return acbonohorario; }

int MUniversidad ::GetCtDoctores()
{   return ctdoctores; }

int MUniversidad ::GetCtCont()
{   return ctcont; }

/*  Actualiza el contador de doctorado y el contador de
    sueldo neto mayor 1500*/
void MUniversidad :: ProcesarContratado(MContratado mcont)
{
    if (mcont.GetNivelAc() == 2)  // Tiene doctorado
        ++ctdoctores;
    if (mcont.SueldoNeto() > 1500)
        ++ ctcont;
}

/*  Actualiza el contador de doctorado y el acumulador de los BsF.
    del bono por horario*/
void MUniversidad :: ProcesarOrdinario(MOrdinario mord)
{
       if (mord.GetNivelAc() == 2)
        ++ctdoctores;
       acbonohorario += mord. BonoHorario();
}
