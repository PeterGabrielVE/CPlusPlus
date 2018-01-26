/*
 * MEmpresa.h
 *
 *  Created on: 14/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef _MEMPRESA_
#define _MEMPRESA_
#include "MEmpleado.h"

class MEmpresa
{
private:
float acummontoprestamo;
int contmujer;
int contmujermenor;
int conthombres;
float acummontoprestamosh;

public:
MEmpresa();
void SetAcumMontoPrestamo(float amp);
float GetAcumMontoPrestamo();
void SetContMujer(int cm);
int GetContMujer();
void SetContMujerMenor(int cmm);
int GetContMujerMenor();
void SetContHombres(int ch);
int GetContHombres();
void SetAcumMontoPrestamosh(float amph);
float GetAcumMontoPrestamosh();
float CalcPorcMujerMenor();
float CalcPromedioH();
void ProcesarEmpleado(MEmpleado me);
};

#endif
