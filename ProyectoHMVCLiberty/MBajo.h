/*
 * Autor: Pedro Gabriel Leal
 */

#ifndef MBAJO_H_
#define MBAJO_H_
#include "MMercancia.h"

class MBajo : public MMercancia
{

public:
	MBajo();
	float ivaB();
	float MontoTotal();
};

#endif
