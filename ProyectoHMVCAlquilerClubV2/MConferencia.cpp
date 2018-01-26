/*
 * MConferencia.cpp
 *
 *  Created on: 23/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MConferencia.h"


MConferencia::MConferencia() {
	// TODO Auto-generated constructor stub

}


int MConferencia::GetCanthoras() const {
	return canthoras;
}

void MConferencia::SetCanthoras(int canthoras) {
	this->canthoras = canthoras;
}

int MConferencia::GetVideobeam() const {
	return videobeam;
}

void MConferencia::SetVideobeam(int videobeam) {
	this->videobeam = videobeam;
}

float MConferencia::CalcMontoVideobeam() {
	if (videobeam==1)
       return 200*canthoras;
	else
		return 0;
}

float MConferencia::CalcMontoaPagar() {
  return  CalcularMontoAlquiler() + CalcMontoVideobeam();
}


