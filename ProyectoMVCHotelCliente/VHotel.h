/*
 * VHotel.h
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#ifndef VHOTEL_H_
#define VHOTEL_H_
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;

class VHotel
{
public:
	VHotel();
	 void ImprimirHotel( float TotalAcM,float TotalAcT, float TotalAcS,float TotalAcC,
	                     float PorcClie5,string HospPreferido);
};

#endif /* VHOTEL_H_ */
