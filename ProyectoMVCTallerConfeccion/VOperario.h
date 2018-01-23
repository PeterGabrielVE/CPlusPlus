/*
 * Author: Pedro Leal
 */

#ifndef VOPERARIO_H_
#define VOPERARIO_H_

/*
 * las librerias iostream y cstdlib,
 * siempre se usan en las vistas,por lo tenato deben ser incluidas, ok
 Ahora bien, la libreria iomanip solo se usa
 cuando vamos a imprimir un valor float, y l a libreria string cuando
 en la clase se use un valor string.  ok
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

class VOperario
{
public:
	VOperario();
	/*
	 * si hay n datos de entrada, entonces la vista de la clase peque�a
	 * tendra "n" metodos para leer cada uno de lo valores. ok
	 */

	string LeerCedula ();
	int LeetTipoO ();
	int LeerHorasTrab ();
	float LeerPrecioH ();

	/*
	 * ademas la vista peque�a , tendra un metodo imprimir,
	 * que se encargara mostrar en pantalla,
	 * la salida requerida de la clase peque�a.(salida por operario)
	 *
	 */

	void ImprimirOperario (string c, string top, int ht, float ph,
							float sueldosem);
};

#endif /* VOPERARIO_H_ */
