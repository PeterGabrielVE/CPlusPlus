/*
 * Author: Pedro Leal
 */

#ifndef VTALLERC_H_
#define VTALLERC_H_
/*
 * como ven no se incluye la libreria string,
   porque no se va a utilizar datos tipo string. ok
 */
#include <iostream>
#include <cstdlib>
#include <iomanip> //se hace el enlace porq se va a imprimir un valor float
using namespace std;

class VTallerC
{
public:
	VTallerC();
	void ImprimirReporte (float mtototextra, float mtototsueldos, int cantophextras);
};



#endif /* VTALLERC_H_ */
