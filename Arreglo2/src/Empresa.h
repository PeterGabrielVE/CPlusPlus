/*
 * Empresa.h
 *
 *  Created on: 13/07/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef EMPRESA_H_
#define EMPRESA_H_
#include "Empleado.h"

int const MAX = 3;
class Empresa
{
	private:
          string rif;
          string nombre;
         int ptr;
         Empleado AEmpleados[MAX];

	public:
          Empresa();
          Empleado getAEmpleados(int pos);
          string getNombre();
          int getPtr();
          string getRif() ;
          void setAEmpleados(Empleado elEmpleado);
          void setNombre(string elNombre);
          void setPtr(int elPtr);
          void setRif(string elRif);
          Empleado determinarPeor();
};

#endif /* EMPRESA_H_ */
