/*
 * MMueble.cpp
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MMueble.h"

MMueble::MMueble() {
	// TODO Auto-generated constructor stub

}

float MMueble::CalcPvp() {
float pvp;
 switch (tipomaterial)
 {
   case 1: pvp= GetCosto() + (GetCosto()*0.20);
         break;
   case 2: pvp= GetCosto() + (GetCosto()*0.30);
         break;
   default: pvp= GetCosto() + (GetCosto()*0.35); /* uds pueden hacer "case 3", normal como hacemos siempre,
                                                    solo  lo quise hacer asi para q vean la utilida del default
                                                    �cuando se ejecuta el default? - pues,
                                                    si el tipomaterial, no es 1, ni es 2, entonces no se ejecuta
                                                    ni el caso 1 ni el caso 2. Se ejecuta entonces el default,
                                                    y como la variable "tipomaterial esta validada con "LeerValidarNro"
                                                    acepta solo los valores 1, 2 y 3, eso que quiere decir? . pues, que
                                                    si tipo de material no es 1 ni es 2, entonces el default significa
                                                    que tipomaterial es 3, en resumen, el "default" es como el "else" del "if"*/


         break;
 }
 return pvp;
}

float MMueble::CalcDescto() {
	return CalcPvp() * 0.10;
}

int MMueble::GetTipomaterial() {
	return tipomaterial;
}

void MMueble::SetTipomaterial(int tm) {
	tipomaterial = tm;
}

float MMueble::CalcMontoaPagar() {
	return CalcPvp() - CalcDescto();
}


