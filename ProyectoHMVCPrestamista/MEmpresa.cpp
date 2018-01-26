/*
 * MEmpresa.cpp
 *
 *  Created on: 14/11/2013
 *      Author: Pedro Gabriel Leal
 */
#include "MEmpresa.h"

MEmpresa::MEmpresa() {
contmujer = contmujermenor = conthombres = 0;
acummontoprestamo = acummontoprestamosh = 0;
}

void MEmpresa::SetAcumMontoPrestamo(float amp)
{
acummontoprestamo = amp;
}

float MEmpresa::GetAcumMontoPrestamo(){
return acummontoprestamo;
}

void MEmpresa::SetContMujer(int cm)
{
contmujer = cm;
}

int MEmpresa::GetContMujer()
{
return contmujer;
}

void MEmpresa::SetContMujerMenor(int cmm)
{
contmujermenor = cmm;
}

int MEmpresa::GetContMujerMenor()
{
return contmujermenor;
}

void MEmpresa::SetContHombres(int ch)
{
conthombres = ch;
}

int MEmpresa::GetContHombres()
{
return conthombres;
}


void MEmpresa::SetAcumMontoPrestamosh(float amph)
{
	acummontoprestamosh = amph;
}

float MEmpresa::GetAcumMontoPrestamosh()
{
return acummontoprestamosh;
}

float MEmpresa::CalcPorcMujerMenor()
{
return (contmujermenor * 100) / contmujer;
}

float MEmpresa::CalcPromedioH()
{
return acummontoprestamosh / conthombres;
}

void MEmpresa::ProcesarEmpleado(MEmpleado me)
{
if (me.GetSexo()==1 and me.GetEdad()<60)
contmujermenor++;
acummontoprestamo += me.GetMontoPrestamo();
if (me.GetSexo() == 1)
contmujer++;
else
conthombres++;

if (me.GetSexo() == 2)
acummontoprestamosh +=  me.GetMontoPrestamo();
}

