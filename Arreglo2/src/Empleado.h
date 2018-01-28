/*
 * Empleado.h
 *
 *  Created on: 13/07/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_
#include <string>
using namespace std;

class Empleado
{
   private:
        string nombre;
        string cedula;
        float sueldo;
public:
        Empleado();
        string getCedula() ;
        string getNombre() ;
        float getSueldo() ;
        void setCedula(string cedula);
        void setNombre(string nombre);
        void setSueldo(float sueldo);

};

#endif /* EMPLEADO_H_ */
