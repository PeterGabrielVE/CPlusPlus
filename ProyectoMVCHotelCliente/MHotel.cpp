/*
 * MHotel.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "MHotel.h"

MHotel::MHotel()
{
	AcMat=AcTrip=AcS=AcC=0;
	ContS=ContC=ContClie5=ContTotalClie=0;
	// TODO Auto-generated constructor stub

}

void MHotel :: ProcesarCliente(MCliente MC)
{
     ++ContTotalClie;
     switch(MC.getTipoHospedaje())
     {
            case 1: AcMat += MC.CalcMontoACancelar();
                    break;
            case 2: AcTrip += MC.CalcMontoACancelar();
                    break;
            case 3: {
                      AcS += MC.CalcMontoACancelar();
                      ++ContS;
                    }
                    break;
            case 4: {
                     AcC += MC.CalcMontoACancelar();
                     ++ContC;
                    }
                    break;
     }
     if (MC.getCantDias()>5)
     ++ContClie5;
}

float MHotel :: CalcPorcClie5()
{
      if(ContTotalClie != 0)
      return (ContClie5 * 100)/ContTotalClie;
      else
      return 0;
}

string MHotel :: CalcMayorDeDos()
{
       if(ContS > ContC)
       return "Suite";
       else
       if(ContS < ContC)
       return "Cabanna";
       else
       return "Por igual";
}

float MHotel :: getAcMat()
{
      return AcMat;
}

float MHotel :: getAcTrip()
{
      return AcTrip;
}

float MHotel :: getAcS()
{
      return AcS;
}

float MHotel :: getAcC()
{
      return AcC;
}

int MHotel :: getContS()
{
    return ContS;
}

int MHotel :: getContC()
{
    return ContC;
}

int MHotel :: getContClie5()
{
    return ContClie5;
}

int MHotel:: getContTotalClie()
{
    return ContTotalClie;
}
