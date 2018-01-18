/*
 * linea.cpp
 *
 *  Created on: 17/06/2012
 *  Author: Gabriel Leal
 */

#include "linea.h"



int linea::obtenercontpasn()
{
	return contpasn;
}



int linea::obtenercontpasi()
{
	return contpasi;
}



float linea::obteneracumingxv()
{
	return acumingxv;
}



float linea::obteneracumingt()
{
	return acumingt;
}

int linea::obtenermenor()
{
	return menor;
}
void linea::asignarcontpasn(int elcontpasn)
{
	contpasn = elcontpasn;
}



void linea::asignarcontpasi(int elcontpasi)
{
	contpasi = elcontpasi;
}



void linea::asignaracumingxv(float elacumingxv)
{
	acumingxv = elacumingxv;
}



void linea::asignaracumingt(float elacumingt)
{
	acumingt = elacumingt;
}

void linea::asignarmenor(int elmenor)
{
	menor = elmenor;
}

linea::linea()
{
	contpasn = 0;
	contpasi = 0;
	acumingxv = 0;
	acumingt = 0;
	menor = 5000;
	contmayor = 0;
}

void linea::contarpasn(vuelo elvuelo)
{
	if (elvuelo.obtenertipov()== 'N')
		contpasn = contpasn + elvuelo.obtenercantp();
}



void linea::contarpasi(vuelo elvuelo)
{
	if (elvuelo.obtenertipov()== 'I')
			contpasi = contpasi + elvuelo.obtenercantp();
}



void linea::acumularingxv(vuelo elvuelo)
{
	acumingxv = acumingxv + elvuelo.obtenercantp() * elvuelo.obtenercostop();

}



void linea::acumularingt(vuelo elvuelo)//este lo voy a usar para sacar porcentaje no confundan...
{
	acumingt = contpasi*100/(contpasn+contpasi);
}

void linea::asignarcontpast(int elcontpast)
{
	contpast = elcontpast;
}

void linea::contarpast(vuelo elvuelo)
{
	contpast = contpasi + contpasn;
}

int linea::obtenercontpast()
{
	return contpast;
}

int linea::obtenercontmayor()
{
	return contmayor;
}

void linea::asignarcontmayor(int elcontmayor)
{
	contmayor = elcontmayor;
}

void linea::tenermenor(vuelo elvuelo)
{
	if(elvuelo.obtenercantp()< menor)
		menor = elvuelo.obtenercantp();
}

void linea::tenermayor(vuelo elvuelo)
{
	if(elvuelo.obtenercantp()> contmayor)
		contmayor = elvuelo.obtenercantp();
}



