
#include "Libreria.h"
#include "Venta.h"

Libreria::Libreria()
{
	ptr = 0;
	MayorV.setmonto(0);
}
int Libreria::getPtr()
{
	return ptr;
}
void Libreria::setAVenta(Venta laVenta)
{
	AVenta[ptr]=laVenta;
	ptr++;
}
Venta Libreria::getAVenta(int i)
{
	return AVenta[i];
}
float Libreria::calPromV()
{
	float acumVD=0.00, promV;
	int contVD=0;
	for (int i=0; i<ptr; i++)
		if (AVenta[i].gettipoV()== 'D')
		{
			acumVD=acumVD+AVenta[i].getmonto();
	contVD++;
		}
		if (contVD>0)
			promV=acumVD/contVD;
		else
			promV=0.00;
		return promV;
		}
void Libreria::calMayorV(Venta laVenta)
{
	for (int i=0; i<ptr; i++)
	{
		if (AVenta[i].getmonto()>MayorV.getmonto())
			MayorV=AVenta[i];
	}
}
Venta Libreria::getMayorV()
{
	return MayorV;
}

