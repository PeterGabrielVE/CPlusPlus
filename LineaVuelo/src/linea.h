/*
 * linea.h
 *
 *  Created on: 17/06/2012
 *  Author: Gabriel Leal
 */

#ifndef LINEA_H_
#define LINEA_H_
#include "vuelo.h"


class linea
{
private:
	int contpasn;//contador para pasajeros nacionales
	int contpasi;//contador para pasajeros internacionales
	int contpast;//contador total
	int contmayor;
	float acumingxv;//acumulador de ingreso por cada vuelo
	float acumingt;//lo usare para sacar el porcentaje no confundan (me equivoque en el nombre :s)
	int menor;
	string nombrea;//para el tipo de vuelo mayor cantidad!!
	string nombreb;//para el tipo de vuelo menor cantidad!!
public:
	linea();
	int obtenercontpasn();
	int obtenercontpasi();
	int obtenercontpast();
	int obtenercontmayor();
	float obteneracumingxv();
	float obteneracumingt();
	int obtenermenor();
	void asignarcontpasn(int elcontpasn);
	void asignarcontpasi(int elcontpasi);
	void asignarcontpast(int elcontpast);
	void asignarcontmayor(int elcontmayor);
	void asignaracumingxv(float elacumingxv);
	void asignaracumingt(float elacumingt);
	void asignarmenor(int elmenor);
	void contarpasn(vuelo elvuelo);
	void contarpasi(vuelo elvuelo);
	void contarpast(vuelo elvuelo);
	void acumularingxv(vuelo elvuelo);
	void acumularingt(vuelo elvuelo);
	void tenermenor(vuelo elvuelo);
	void tenermayor(vuelo elvuelo);
};

#endif /* LINEA_H_ */
