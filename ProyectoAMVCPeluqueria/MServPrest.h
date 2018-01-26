/*
 * MServPrest.h
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef MServPrest_H
#define MServPrest_H
#include <string>
class MServPrest
{  private:
	    int dia,tipo;
   public:
		MServPrest();
		void SetDia(int d);
		void SetTipo(int t);
	    int GetDia();
		int GetTipo();
};
#endif
