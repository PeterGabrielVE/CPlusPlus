/*
 * Paciente.h
 *
 *  Created on: 06/02/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef PACIENTE_H_
#define PACIENTE_H_
#include <iostream>
#include <string>

using namespace std;

class Paciente {
private:
     string Nombre;
     int Edad;
     float Altura;
     float Peso;


public:
	Paciente();

	void setNombre(string elNombre);
	string getNombre();
	void setEdad(int laEdad);
	int getEdad();
	void setAltura(float laAltura);
    float getAltura();
    void setPeso(float elPeso);
    float getPeso();
    float CalcularPesoI();
};

#endif /* PACIENTE_H_ */
