/*
 * Universidad.h
 *
 *  Created on: 25/02/2013
 *  Author: Gabriel Leal
 */

#ifndef UNIVERSIDAD_H_
#define UNIVERSIDAD_H_
#include "Empleado.h"
const int MAX=10;

class Universidad
{
private:
	int ptr;
	Empleado Arr_Empleado[MAX], Mayor;
public:
	Universidad();
	int getptr(); //Puntero
	bool setArr_Empleado(Empleado elEmpleado);
	Empleado getArr_Empleado(int i);
	int BuscadorEmCI(string laCedula); //Buscador de Empledos por Cedula.
	int CantProf(); //Determina la Cantida de Profesor que hay en la Universidad.
	int CantAdm(); //Determina la Cantida de Administrador  que hay en la Universidad.
	int CantObreros(); //Determina la Cantida de Obreros que hay en la Universidad.
	int ConsultaTipoEmpleado(string elTipo); // Consulta el tipo de Empleado y Muestra la Cantidad.
	Empleado DetMayor(); //Determina Cedula del Empleado con Sueldo Mayor.


};

#endif /* UNIVERSIDAD_H_ */
