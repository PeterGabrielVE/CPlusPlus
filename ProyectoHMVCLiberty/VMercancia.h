/*
 * Autor: Pedro Gabriel Leal
 */

#ifndef VMERCANCIA_H_
#define VMERCANCIA_H_
#include "VGeneral.h"
class VMercancia : public VGeneral
{
public:
	VMercancia();
	void ImprimirMercancia(string NroGuia, string DProducto, string Destinat, float PesoL, float iva, float MontoTotal);
};

#endif /* VMERCANCIA_H_ */
