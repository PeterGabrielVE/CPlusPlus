/*
 * Autor: Pedro Gabriel Leal
 */

#ifndef MALTO_H_
#define MALTO_H_
#include "MMercancia.h"
class MAlto : public MMercancia
{
private:
	int TipoAr;
public:
	MAlto();
	void SetTipoAr(int);
	int GetTipoAr();
    float CalcularArancel();
    float Seguro();
    float iva();
    float MontoTotal();
};
#endif
