/*
 * Alumno.h
 *
 *  Created on: 20/07/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <string>
using namespace std;

class Alumno
{
private:
      string nombre;
      float nota1;
      float nota2;
      float nota3;
public:
	Alumno();
	string getNombre() ;
	void setNombre(string nombre);
	float getNota1() ;
	void setNota1(float laNota1);
	float getNota2() ;
	void setNota2(float laNota2);
	float getNota3() ;
	void setNota3(float laNota3);
};

#endif /* ALUMNO_H_ */
