/*
 * Controlador.h
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MTienda.h"
#include "MElectrodomesticos.h"
#include "VElectrodomesticos.h"
#include "VTienda.h"

/* Normalmente la clase Grande posee tantos procesar como hijos tenga la relacion de herencia,
 * y si es asi, en el conrtrolador solo se hace el include de la clase GRANDE, porque esta incluye
 * las subclases de la herencia(hijos),  pero en este caso no es asi!!!
 * porque la clase Grande (MTienda) tiene solo UN PROCESAR: ProcesarJuguete,
 * NO TIENE PROCESARELECTRODOMESTICO!!! por lo tanto solo hay una relacion de uso de MTienda
 * con MJuguete, por esa raz�n, elcontrolador, ademas de hacer el include de la clase Grande(Mtienda),
 * tambien debe hacer el de MElectrodomestico!!
 * para poder utilizarla en el procesarArticulos.
 * por eso ud observa que hay
 * #include "MElectrodomesticos.h", y no se hace el include de MJuguete.
 *  ok
 */
class Controlador
{
private:
    MTienda mt;
public:
	Controlador();
	void ProcesarArticulos();
	void Estadisticas();
};

#endif /* CONTROLADOR_H_ */
