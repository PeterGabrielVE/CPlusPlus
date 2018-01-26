
/*
 *  MEstudiante.h
 * Author:Pedro Gabriel Leal
 *
 */

#ifndef MESTUDIANTE_H
#define MESTUDIANTE_H
#include "MPersona.h"

class MEstudiante:public MPersona
{
	private:
		float nota;
	public:
		MEstudiante();
		void SetNota(float);
        float GetNota();
		
};
#endif
