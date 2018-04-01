/*
 * Autor: Pedro Gabriel Leal
 */

#include "MBajo.h"
MBajo::MBajo(){}

float MBajo::ivaB()
{
return (CalcularFlete() + LibraAdic() + 5 + 78) * 0.12;
}

float MBajo::MontoTotal()
{
	return  CalcularFlete() + LibraAdic() + 5 + 78 + ivaB();
}

