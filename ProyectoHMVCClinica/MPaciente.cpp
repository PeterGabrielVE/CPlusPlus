/*
 * MPaciente.cpp
 *
 *  Created on: 26/01/2014
 *      Author: Pedro Gabriel Leal
 */

#include "MPaciente.h"

MPaciente::MPaciente() {
	// TODO Auto-generated ructor stub

}

//set

void MPaciente::SetMotivovisita(int motivov)
{
    motivovisita = motivov;
}

void MPaciente::SetTurno(int tur)
{
    turno = tur;
}

void MPaciente::SetMontocancelado(float mtocancel)
{
    montocancelado = mtocancel;
}


//get

int MPaciente::GetMotivovisita()
{
    return motivovisita;
}

int MPaciente::GetTurno()
{
    return turno;
}

float MPaciente::GetMontocancelado()
{
    return montocancelado;
}
