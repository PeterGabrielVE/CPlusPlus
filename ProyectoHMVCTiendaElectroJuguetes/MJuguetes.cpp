/*
 * MJuguete.cpp
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MJuguetes.h"

MJuguetes::MJuguetes()
{
	// TODO Auto-generated constructor stub
}


float MJuguetes::CalcGanancia()
{
	return  (GetPvp()- GetCosto());
}




