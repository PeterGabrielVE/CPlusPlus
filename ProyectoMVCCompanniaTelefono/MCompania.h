/*
 * MCompa�ia.h
 *
 *  Created on: 03/07/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MCOMPANIA_H_
#define MCOMPANIA_H_
#include <string>
using namespace std;
#include "MLlamada.h"

class MCompania
{
private:
	string nomb, dir, rif;
		float acumtotal,acumlocal,acuminter,acumcel;
		int contlocal,continter,contcel;
public:
	MCompania();
	void setnombre(string n);
		void setdireccion(string d);
		void setrif(string r);
		string getnombre();
		string getdireccion();
		string getrif();
		float getacumtotal();
		float getacumlocal();
		float getacuminter();
		float getacumcel();
		int getlocal();
		int getinter();
		int getcel();

		string calcmayortipollamada();
		void ProcesarLlamadas(MLlamada ml);
};

#endif /* MCOMPANIA_H_ */
