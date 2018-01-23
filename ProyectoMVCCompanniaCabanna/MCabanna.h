/*
 * MCabanna.h
 *
 *  Created on: 20/09/2014
 *      Author: Gabriel
 */

#ifndef MCABANNA_H_
#define MCABANNA_H_
#include <string>

using namespace std;

class MCabanna
{
private:
	      string nombre; //nombre del cliente
	      float montoAlq;
public:
	MCabanna();
	void setNombre(string n);
	string getNombre();
    void setMontoAlq(float ma);
	float getMontoAlq();
};

#endif /* MCABANNA_H_ */
