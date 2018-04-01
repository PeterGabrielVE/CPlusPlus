/*
 * Autor: Pedro Gabriel Leal
 */

#ifndef MEMPRESA_H_
#define MEMPRESA_H_
#include "MAlto.h"
#include "MBajo.h"
#include <string>
using namespace std;
class MEmpresa
{
private:
	int contDepor;
	int contPc;
	int contElec;
public:
	MEmpresa();
	void SetcontDepor(int);
	int GetcontDepor();
	void SetcontPc(int);
	int GetcontPc();
	void SetcontElec(int);
	int GetcontElec();
	void ProcesarArticulo(MAlto mal);
	string Mayor();
};

#endif /* MEMPRESA_H_ */
