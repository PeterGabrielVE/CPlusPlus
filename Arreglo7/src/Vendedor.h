/*
 * vendedor.h
 *
 *  Created on: 22/07/2012
 *      Author: Pedro
 */

#ifndef VENDEDOR_H_
#define VENDEDOR_H_
#include <string>

using namespace std;

class vendedor
{
	private:
		string nombre;
		float totalV;
	public:
		void setNombre(string elNombre);
		string getNombre();
		void setTotalV(float elTotal);
		float getTotalV();
	vendedor();
};

#endif /* VENDEDOR_H_ */
