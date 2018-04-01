/*
 * MLibro.cpp
 *
 *  Created on: 02/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MLibro.h"

MLibro::MLibro() {}

void MLibro::SetTitulo(string tlo)
{
	titulo=tlo;
}
void MLibro::SetAutor(string au)
{
	autor=au;
}
void MLibro::SetTipoL(int tl)
{
	tipol=tl;
}
string MLibro::GetTitulo()
{
	return titulo;
}
string MLibro::GetAutor()
{
	return autor;
}

int MLibro::GetTipoL()
{
	return tipol;
}
