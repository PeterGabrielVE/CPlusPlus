/*
 * MEvento.cpp
 *
 *  Created on: 23/11/2013
 *  Author:Pedro Gabriel Leal
 */

#include "MEvento.h"

string MEvento::GetFechaevento()  {
	return fechaevento;
}

void MEvento::SetFechaevento(string fecheve) {
	fechaevento = fecheve;
}

string MEvento::GetNombrepersalq()  {
	return Nombrepersalq;
}

void MEvento::SetNombrepersalq(string nombrepersalq) {
	Nombrepersalq = nombrepersalq;
}

int MEvento::GetNrosala()  {
	return nrosala;
}

void MEvento::SetNrosala(int nsala) {
	nrosala = nsala;
}

int MEvento::GetSocio()  {
	return socio;
}

void MEvento::SetSocio(int nsocio) {
	socio = nsocio;
}

int MEvento::GetTipoevento()  {
	return tipoevento;
}

void MEvento::SetTipoevento(int tipoeve) {
	tipoevento = tipoeve;
}

MEvento::MEvento() {
	// TODO Auto-generated ructor stub

}

