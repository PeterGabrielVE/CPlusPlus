/*
 * MCoordinacion.h
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef MCOORDINACION_H_
#define MCOORDINACION_H_
#include "MAlumno.h"

class MCoordinacion
{
private:
    int contNot20;
    int contAlu;
    int contAplazados;
    int contAprobados;
    float acumNota;
public:
    MCoordinacion();

    float getAcumNota();
    int getContAlu();
    int getContAplazados();
    int getContAprobados();
    int getContNot20();

    void procesarAlumnos (MAlumno ma);
    float porcAplazados ();
    float promedioNotasA ();

};

#endif /* MCOORDINACION_H_ */
