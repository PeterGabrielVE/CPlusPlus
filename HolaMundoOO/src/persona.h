/*
 * persona.h
 *
 *  Created on: 22/05/2012
 *      Author: Profesor
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>
using namespace std;
class persona
{
private:
	string nombre;
public:
	persona();
	void asignarNombre (string elNombre);
	string obtenerNombre();
};

#endif /* PERSONA_H_ */
