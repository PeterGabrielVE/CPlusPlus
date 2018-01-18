/*
 * Persona.h
 *
 *  Created on: 21/05/2012
 *  Author: Gabriel Leal
 */

#ifndef PERSONA_H_
#define PERSONA_H_

class Persona
{
	private:
	        int edad;
	        char sexo;
	        int cantHijos;
    public:
	        Persona();
	        int getCantHijos();
	        int getEdad();
	        char getSexo();
	        void setCantHijos(int laCantHijos);
	        void setEdad(int laEdad);
	        void setSexo(char elSexo);

};

#endif /* PERSONA_H_ */
