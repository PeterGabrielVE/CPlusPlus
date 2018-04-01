/*
 * Autor: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MEmpresa.h"
#include"VEmpresa.h"
#include "VMercancia.h"
#include "MBajo.h"

class Controlador
{
private:
	MEmpresa mem;
	int check;
public:
	Controlador();
	void SetCheck(int);
	int GetCheck();
	void ProcesarProducto();
	void ImprimirEmpresa();
};

#endif /* CONTROLADOR_H_ */
