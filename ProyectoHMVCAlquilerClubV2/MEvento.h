/*
 * MEvento.cpp
 *
 *  Created on: 23/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MEVENTO_H_
#define MEVENTO_H_
#include <string>
using namespace std;

class MEvento {
protected:
	 int nrosala;
	 string fechaevento;
	 string Nombrepersalq;
	 int socio;
	 int tipoevento;
public:
	 MEvento();
	string GetFechaevento() ;
	void SetFechaevento(string fechev);
	string GetNombrepersalq() ;
	void SetNombrepersalq(string nomb);
	int GetNrosala() ;
	void SetNrosala(int nsala);
	int GetSocio() ;
	void SetSocio(int nsocio);
	int GetTipoevento() ;
	void SetTipoevento(int tipoev);
	float CalcularMontoAlquiler();


};

#endif /* MEVENTO_H_ */
