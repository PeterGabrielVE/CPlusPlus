/*
 * Autor: Pedro Gabriel Leal
 */

#ifndef MMERCANCIA_H_
#define MMERCANCIA_H_
#include <string>
using namespace std;
class MMercancia
{
protected:
	string NroGuia;
	string DProducto;
	float PesoL;
	float PreDolar;
	string Destinat;
	int TipoV;

public:
	MMercancia();
	void SetNroGuia(string);
	string GetNroGuia();
	void SetDProducto(string);
	string GetDProducto();
	void SetPesoL(float);
	float GetPesoL();
	void SetPreDolar(float);
	float GetPreDolar();
	void SetDestinat(string);
	string GetDestinat();
	void SetTipoV(int);
	int GetTipoV();
	float CalcularFlete();
	float LibraAdic();
};
#endif
