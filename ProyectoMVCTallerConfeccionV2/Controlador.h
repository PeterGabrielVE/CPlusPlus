/*
 * Author: Gabriel Leal
 *
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_

#include <cstdlib>

#include "MTallerC.h"
#include "VTallerC.h"
#include "VOperario.h"

using namespace std;

class Controlador
{
private:
	MTallerC mtc;

public:
	Controlador ();
	void ProcesarTallerC();
	void Reporte();
};
#endif /* CONTROLADOR_H_ */
