/*
 * Autor: Pedro Gabriel Leal
 */

#include "MAlto.h"
MAlto::MAlto(){}

void MAlto::SetTipoAr(int tipoa)
{
	TipoAr = tipoa;
}
int MAlto::GetTipoAr()
{
	return TipoAr;
}
float MAlto::CalcularArancel()
{
	if (TipoAr == 1)
		return (PreDolar * 0.15) * 4.3;
	if (TipoAr == 2)
		return (PreDolar * 0.25) * 4.3;
	if(TipoAr == 3)
		return (PreDolar *0.20) * 4.3;
	else return 0;
}
float MAlto::Seguro()
{
	return (PreDolar*0.04) * 4.3;
}
float MAlto::iva()
{
	return (CalcularArancel() + Seguro() + CalcularFlete() + 110 + LibraAdic())*0.12;
}
float MAlto::MontoTotal()
{
	return CalcularArancel()+ Seguro()+ CalcularFlete() + 110 + LibraAdic() + iva();
}

