/*
 * vendedor.h
 *
 *  Created on: 24/05/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef VENDEDOR_H_
#define VENDEDOR_H_
#include<string>
using namespace std;

class vendedor {
private:
	string CodigoV, NombreV;
public:
	vendedor();
	void asignarCodigoV(string CV);
	void asignarNombreV(string NV);
	string obtenerCodigoV();
	string obtenerNombreV();
};

#endif /* VENDEDOR_H_ */
