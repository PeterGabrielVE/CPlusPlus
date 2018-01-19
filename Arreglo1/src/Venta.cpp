
#include "Venta.h"

Venta::Venta()
{
	tipoV=' ';
	monto=0.00;
}
void Venta::settipoV(char eltipoV)
{
	tipoV=eltipoV;
}
char Venta::gettipoV()
{
	return tipoV;
}
void Venta::setmonto(float elmonto){
	monto=elmonto;
}
float Venta::getmonto()
{
	return monto;
}
