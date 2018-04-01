/*
 * Autor: Pedro Gabriel Leal
 */

#include "VEmpresa.h"
VEmpresa::VEmpresa(){}

void VEmpresa::ImprimirEmpresa(string Mayor)
{
	Limpiar();
	ImprimirEncabezado("Informacion de Empresa","======================");
    ImprimirString("\n\n Productos mas vendidos: ", Mayor);
    ImprimirLineasBlanco(2);
    Pausa();
}

