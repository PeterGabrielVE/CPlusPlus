/*
 * MLlamada.h
 *
 *  Created on: 02/07/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MLLAMADA_H_
#define MLLAMADA_H_
#include <string>
using namespace std;
class MLlamada {
private:

	float duracion;
	int tipo,contllamada;


public:
	MLlamada();
	void setduracion(float d);
	float getduracion();
	void settipo(int t);
	int gettipo();
	int getcontadorllamadas();
	float calcmontollamada();
	string tipollamadas();
};

#endif /* MLLAMADA_H_ */
