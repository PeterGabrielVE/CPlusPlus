

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MUniversidad.h"
#include "VDocente.h"
#include "VUniversidad.h"

class Controlador
{
	private:
		MUniversidad mu;
	public:
		Controlador();
		void ProcesarDocentes();
		void ReporteUniversidad();
};
#endif /* CONTROLADOR_H_ */
