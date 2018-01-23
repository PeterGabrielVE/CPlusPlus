/*
 * MCompania.cpp
 *
 *  Created on: 03/07/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MCompania.h"

MCompania::MCompania() {
	// TODO Auto-generated constructor stub
	acumtotal=acumlocal=acuminter=acumcel=0;
		continter=contcel=contlocal=0;



	}

	void MCompania::setnombre(string n)
	{
		nomb=n;
	}

	void MCompania::setdireccion(string d)
	{
		dir=d;
	}

	void MCompania::setrif(string r)
	{
		rif=r;
	}

	string MCompania::getnombre()
	{
		return nomb;
	}

	string MCompania::getdireccion()
	{
		return dir;
	}

	string MCompania::getrif()
	{
		return rif;
	}

	void MCompania::ProcesarLlamadas(MLlamada ml)
	{
	acumtotal+=ml.calcmontollamada();
	switch(ml.gettipo())
	{
	case 1:{ ++contlocal;
	acumlocal+= ml.calcmontollamada();
	}break;
	case 2:{ ++continter;
	acuminter+= ml.calcmontollamada();
	}break;
	case 3: {++contcel;
	acumcel+=ml.calcmontollamada();
	}break;
	}
	}
	float MCompania::getacumtotal()
	{
		return acumtotal;
	}


	int MCompania::getlocal()
	{
		return contlocal;
	}

	int MCompania::getinter()
	{
	return continter;
	}

	string MCompania::calcmayortipollamada()
	{
		string mayortipo;
			if(contlocal > continter and contlocal > contcel)
				mayortipo="local";

			else
				if(continter > contlocal and continter > contcel)
					mayortipo="Internacionales";
				else
				mayortipo="celular";
			return mayortipo;
	}


	int MCompania::getcel()
	{
		return contcel;
	}



