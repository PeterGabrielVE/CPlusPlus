/*
 * MArea.cpp
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal
 */

#include "MArea.h"



MArea::MArea() {
	acum=0;
}

void MArea::SetDescripcion(string desc)
{
    descripcion = desc;
}

void  MArea::SetPorcdescto(float porcd)
{
porcdescto=porcd;
}

void MArea::SetAcum(float ac)
{
    acum = ac;
}


string MArea::GetDescripcion()
{
    return descripcion;
}

float MArea::GetPorcdescto()
{
    return porcdescto;
}

float MArea::GetAcum()
{
    return acum;
}

void MArea::Actualizar(float precio) {
	float descto= precio*porcdescto/100;
	float montoacanc=precio-descto;
	acum+=montoacanc;
}

