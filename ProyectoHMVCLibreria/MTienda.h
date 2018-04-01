/*
 * Author: Pedro Gabriel Leal
 */
#ifndef MTIENDA_H_
#define MTIENDA_H_
#include "MLTradicional.h"
#include "MLDigital.h"
class MTienda
{
private:
float tganancias;
	int ctinter, ctlibrost,ctlibrosd;
public:
	MTienda();
void SetTGanancia(float tg);
	void SetCtInter(int ci);
	void SetCtLibrosT(int ct);
	void SetCtLibrosD(int cd);
float GetTGanancia();
	int GetCtInter();
	int GetCtLibrosT();
	int GetCtLibrosD();
	void ProcesarLibrosD(MLDigital mld);
	void ProcesarLIbrosT(MLTradicional mlt);
	float Porcentaje();
	string MayorLibro();


};

#endif /* MTIENDA_H_ */
