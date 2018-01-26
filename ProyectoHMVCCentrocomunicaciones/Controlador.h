/*
 * Controlador.h
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MCentroComunicaciones.h"
#include "VCentroComunicaciones.h"
#include "VFijo.h"
#include "VCelular.h"

/* observe que no se incluye ni MFijo, ni MCeluilar,
 * esto es porque la clase MCentroComunicaciones
 * tiene un relacion de uso,y por ello puede trabajar con ambas clases en el metodo ProcesarTelefono.
 * COMPARELO CON EL EJERCICIO NRO 4 , EL DE JUGUETES Y ELECTRODOMESTICOS
 * PARA QUE VEA LA DIFERENCIA,
 * PUES EN ESE PROGRAMA, LA CLASE GRANDE(MTIENDA)TIENE SOLO RELACION DE USO CON MJUGUETE,
 *  Y POR LO TANTO HAY Q HACER EL INCLUDE A MELECTRODOMSTICO. OK...
 */



class Controlador {

private:
	MCentroComunicaciones mcc;

public:
	Controlador();
	void ProcesarTelefonos();
	void Estadisticas();
};

#endif /* CONTROLADOR_H_ */
