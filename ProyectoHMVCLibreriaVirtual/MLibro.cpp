/*
 * MLibro.cpp
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MLibro.h"


MLibro::MLibro() {
	// TODO Auto-generated constructor stub

}

void MLibro::SetAutor(string aut)
{
    autor = aut;
}

void MLibro::SetTitulo(string tit)
{
    titulo = tit;
}

string MLibro::GetAutor()
{
    return autor;
}

string MLibro::GetTitulo()
{
    return titulo;
}

