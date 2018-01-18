/*
 * Grupo.h
 *
 *  Created on: 21/05/2012
 *  Author: Gabriel Leal
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
	        int acumHijos;
   public:
	       Grupo();
	       int getAcumHijos();
	       int getContHM21();
	       int getContMME();
	       int getContMNM();
	       void setAcumHijos(int elAcumHijos);
	       void setContHM21(int elContH21);
	       void setContMME(int elContMme);
	       void setContMNM(int elContMnm);
	       void contarHM21 (Persona laPersona);
	       void contarMNM (Persona laPersona);
	       void contarMME (Persona laPersona);
	       void acumularHijos (Persona laPersona);
};

#endif /* GRUPO_H_ */
