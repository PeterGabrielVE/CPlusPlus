/*
 * MHotel.h
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#ifndef MHOTEL_H_
#define MHOTEL_H_
#include <string>
#include "MCliente.h"

using namespace std;

class MHotel
{
	private:
              float AcMat,AcTrip,AcS,AcC;
              int ContS,ContC,ContClie5,ContTotalClie;
    public:
	             MHotel();
	             void ProcesarCliente(MCliente MC);
	             float CalcPorcClie5();
	             string CalcMayorDeDos();
	             float getAcMat();
	             float getAcTrip();
	             float getAcS();
	             float getAcC();
	             int getContS();
	             int getContC();
	             int getContClie5();
	             int getContTotalClie();
};

#endif /* MHOTEL_H_ */
