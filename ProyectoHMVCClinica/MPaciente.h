/*
 * MPaciente.h
 *
 *  Created on: 26/01/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MPACIENTE_H_
#define MPACIENTE_H_
#include "MPersona.h"

class MPaciente : public MPersona  {
private:
  int motivovisita;
  int turno;
  float montocancelado;
public:
	MPaciente();
    //set
	void SetMotivovisita(int);
	void SetTurno(int );
	void SetMontocancelado(float );
	//get
    int GetMotivovisita() ;
    int GetTurno() ;
    float GetMontocancelado() ;

};

#endif /* MPACIENTE_H_ */
