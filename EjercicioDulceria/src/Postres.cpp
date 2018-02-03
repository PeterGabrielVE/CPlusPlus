/*
 * Postres.cpp
 *
 *  Created on: 23/02/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Postres.h"

Postres::Postres() {
	// TODO Auto-generated constructor stub

}

void Postres::setNombre(string Nom)
{
	Nombre=Nom;

}


string Postres::getNombre()
{
	return Nombre;
}

void Postres::setCantAzucar(int Azucar)
{
	CantAzucar=Azucar;
}

int Postres::getCantAzucar()
{
	return CantAzucar;
}

void Postres::setCantCacao(int Cacao)
{
	CantCacao=Cacao;
}

int Postres::getCantCacao()
{
	return CantCacao;
}

void Postres::setCantMant(int Mant)
{
	CantMant=Mant;

}

int Postres::getCantMant()
{
	return CantMant;
}

void Postres::setCantRaciones(int Raciones)
{
	CantRaciones=Raciones;
}

int Postres::getCantRaciones()
{
	return CantRaciones;
}
