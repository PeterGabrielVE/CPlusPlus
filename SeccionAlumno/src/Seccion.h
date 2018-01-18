/*
 * Seccion.h
 *
 *  Created on: 18/06/2012
 *      Author: Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_

#include "Alumno.h"
#include <string>

class Seccion
{
    private:
	      int contMenores;
	      int mayor;

    public:
	      Seccion();
	      int getcontMenores();
	     void ContarMenores(Alumno elAlumno);

	      int getEdadMayor();
          void determinarMayor(Alumno elAlumno);


};

#endif /* SECCION_H_ */
