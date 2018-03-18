/*
 * MLibro.h
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MLIBRO_H_
#define MLIBRO_H_
#include "MArticulo.h"
class MLibro : public MArticulo {
protected:
	string titulo;
	string autor;
public:
	MLibro();
    void SetAutor(string aut);
    void SetTitulo(string tit);
    string GetAutor();
    string GetTitulo() ;
};

#endif /* MLIBRO_H_ */
