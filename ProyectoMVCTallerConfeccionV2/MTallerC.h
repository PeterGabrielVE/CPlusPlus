/*
 * Author: Gabriel Leal
 *
 */

#ifndef MTALLERC_H_
#define MTALLERC_H_

#include "MOperario.h"

class MTallerC
{
 private:
   float acummontohe, acumsueldo;
   int contoperhe;

 public:
	MTallerC ();
	void ProcesarOperario (MOperario mo);
	int GetContOperHE ();
	float GetAcumMontoHE ();
	float GetAcumSueldo();

};
#endif /* MTALLERC_H_ */
