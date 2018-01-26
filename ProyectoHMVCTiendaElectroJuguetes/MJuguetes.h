/*
 * MJuguete.h
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MJUGUETES_H_
#define MJUGUETES_H_
#include "MArticulo.h"
class MJuguetes : public MArticulo
{
public:
	MJuguetes();
    float CalcGanancia();
};

#endif /* MJUGUETES_H_ */
