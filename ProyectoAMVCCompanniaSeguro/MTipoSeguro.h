/*
 * Seguro.h
 *
 *  Created on: 05/01/2012
 *       Author: Pedro Gabriel Leal
 */

#ifndef MTIPOSEGURO_H_
#define MTIPOSEGURO_H_
#include <string>
using namespace std;
class MTipoSeguro {
private:
	string descripcion;
	float porc_comi;
public:
	MTipoSeguro();
	void SetDescripcion(string d);
	void SetPorcComi(float porc);
	string GetDescripcion();
	float GetPorcComi();
};
#endif /* SEGURO_H_ */
