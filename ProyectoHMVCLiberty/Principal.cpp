/*
 * Autor: Pedro Gabriel Leal
 */

#include "Controlador.h"
int main()
{
	int opc;
	Controlador c;
	VGeneral vg;
	do
	{
		vg.Limpiar();
		vg.ImprimirEncabezado("MENU DE OPCIONES","****************");
		vg.ImprimirMensaje("\n\n 1.  Procesar Productos");
		vg.ImprimirMensaje("\n 2.  Reportes Liberty Express");
		vg.ImprimirMensaje("\n 3.  Salir del Programa");
		opc = vg.LeerValidarNro("\n\n Seleccione una Opcion:  ", 1,3);
		switch(opc)
		{
		case 1: c.ProcesarProducto();
		break;
		case 2: c.ImprimirEmpresa();
		break;
        }
	} while (opc != 3);
	return 0;
}
