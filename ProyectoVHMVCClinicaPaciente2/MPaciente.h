/*
 * MPaciente.h
 *
 *  Created on: 27/01/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MPACIENTE_H_
#define MPACIENTE_H_
#include "MPersona.h"

class MPaciente : public MPersona
{
private:
  int motivoV;
  int turno,dia;
  float montoC;
public:
	MPaciente();
    //set
	void SetMotivoV(int);
	void SetTurno(int );
	void SetMontoC(float );
	void setDia(int);
	//get
    int GetMotivoV() ;
    int GetTurno() ;
    float GetMontoC() ;
    int GetDia();

};

#endif /* MPACIENTE_H_ */
