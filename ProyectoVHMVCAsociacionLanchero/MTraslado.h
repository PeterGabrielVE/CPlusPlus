/*
 * MTraslado.h
 *
 *  Created on: 05/02/2014
 *
 *      Author:Pedro Gabriel Leal
 */

#ifndef MTRASLADO_H_
#define MTRASLADO_H_
#include <string>
using namespace std;

	class MTraslado
	{
		private:
		    int dia;
		    int nrocayo;
		    string ced;
		public:
			MTraslado();
			void SetCedula(string c);
		    void SetDia(int d);
		    void SetNrocayo(int nc);

	        string GetCedula() ;
	        int GetDia() ;
	        int GetNrocayo() ;
	};
	#endif
