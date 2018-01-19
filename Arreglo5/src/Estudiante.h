/*
 * Estudiante.h
 *
 *  Created on: 20/07/2012
 *      Author: Pedro Leal
 */

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

class Estudiante
{
private:
float nota;
char sexo;
int edad;

public:
	Estudiante();
	void setNota(float laNota);
	float getNota();
	void setSexo(char elSexo);
	char getSexo();
	void setEdad(int laEdad);
	int getEdad();
};

#endif /* ESTUDIANTE_H_ */
