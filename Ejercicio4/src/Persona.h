/*
 * Persona.h
 *
 *  Created on: 21/05/2012
 *  Author: Pedro Gabriel Leal
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
	void asignarEdad (int laEdad);
	int obtenerEdad ();
	void asignarSexo (char elSexo);
	char obtenerSexo ();
	void asignarCantHijos (int laCantHijos);
	int obtenerCantHijos ();
};

#endif /* PERSONA_H_ */
