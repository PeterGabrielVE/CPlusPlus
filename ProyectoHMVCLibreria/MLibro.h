/*
 * MLibro.h
 *
 *  Created on: 02/05/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MLIBRO_H_
#define MLIBRO_H_
#include <string>
#include "MArticulo.h" // clase base gen�rica que ser� padre de MProfesor
using namespace std;
class MLibro : public MArticulo
{
	protected:
			string titulo, autor;
			int tipol;
	public:
	MLibro();
	void SetTitulo(string tlo);
	void SetAutor(string au);
	void SetTipoL(int tl);
	string GetTitulo();
	string GetAutor();
	int GetTipoL();
};

#endif /* MLIBRO_H_ */
