/*
 * MTienda.h
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MTIENDA_H_
#define MTIENDA_H_
#include "MTradicional.h"
#include "MDigital.h"

class MTienda {
private:

   float acganancia;
   int contvint;
   int contlt;
   int contld;
   int menorcostonetoDig;// Req 1 (menor de muchos)

   int menorcostoneto; /* <-Req 2*/

   float acumpnetotrad40; /* <-Req 3*/
   int contador40; /* <-Req 3*/

   string titulomayorD;
   string autormayorD;
   float mayorpvpD;


public:
	MTienda();
	//set
	 void SetAcganancia(float acgan);
	 void SetContld(int cld);
	 void SetContlt(int clt);
	 void SetContvint(int cvi);

	 void SetMenorcostonetoDig(int mencnDig); //Req 1
	 void SetMenorcostoneto(int menorcn); //Req 2
	 void Setacumpnetotrad40(float acumpneto40); //Req 3
	 void Setcontador40(int cont40); //Req 3
	 void SetMayorpvpD(float mayorpD);//Req 4
	 void SetTitulomayorD(string titulomayD); //Req 4
	 void SetAutormayorD(string autormayD); //Req 4


	 //get
	 float GetAcganancia();
	 int GetContld() ;
	 int GetContlt() ;
	 int GetContvint() ;
	 int GetMenorcostonetoDig(); //Req 1
	 int GetMenorcostoneto() ;   //Req 2
	 float Getacumpnetotrad40() ;  //Req 3
	 int Getcontador40() ;//Req 3
	 string GetAutormayorD() ;  //Req 4
     float GetMayorpvpD() ;     //Req 4
	 string GetTitulomayorD() ; //Req 4

	 //procesar
	 void ProcesarTradicional(MTradicional mt);
	 void ProcesarDigital(MDigital md);

	//metodos de calculos
	 float CalcPorcVInt();
	 string CalcMayorTipo();
     float CalcPromedioPnetoTrad40(); //Req 3








};

#endif /* MTIENDA_H_ */
