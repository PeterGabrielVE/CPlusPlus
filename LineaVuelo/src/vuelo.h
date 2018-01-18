/*
 * vuelo.h
 *
 *  Created on: 17/06/2012
 *  Author: Gabriel Leal
 */

#ifndef VUELO_H_
#define VUELO_H_
#include <string>
using namespace std;
class vuelo
{
private:
	int numv;
	char tipov;
	int cantp;
	float costop;
public:
	vuelo();
	int obtenernumv();
	char obtenertipov();
	int obtenercantp();
	float obtenercostop();
	void asignarnumv(int elnumv);
	void asignartipov(char eltipov);
	void asignarcantp(int lacantp);
	void asignarcostop(float elcostop);
	float calcularing();
};

#endif /* VUELO_H_ */
