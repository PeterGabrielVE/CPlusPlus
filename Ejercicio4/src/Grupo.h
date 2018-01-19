/*
 * Grupo.h
 *
 *  Created on: 21/05/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef GRUPO_H_
#define GRUPO_H_
#include "Persona.h"

class Grupo
{
private:
	int contHM21;
	int contMNM;
	int contMME;
	int contMMECH; //Madres Menores de edad con 2 o mas hijos
	int acumHijos;
public:
	Grupo();
	void asignarContHM21 (int elContHM21);
	int obtenerContHM21 ();
	void asignarContMNM (int elContMNM);
	int obtenerContMNM ();
	void asignarContMME (int elContMME);
	int obtenerContMME ();
	void asignarAcumHijos (int elAcumHijos);
	int obtenerAcumHijos ();
	void asignarContMMECH (int elContMMECH);	//contador de mujeres menores de edad con 2 o mas hijos
	int obtenerContMMECH ();
	void contarHM21 (Persona laPersona);
	void contarMNM (Persona laPersona);
	void contarMME (Persona laPersona);
	void contarMMECH (Persona laPersona);
	void acumularHijos (Persona laPersona);
};

#endif /* GRUPO_H_ */
