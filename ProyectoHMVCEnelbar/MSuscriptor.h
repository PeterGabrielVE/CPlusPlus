/*
 * MSuscriptor.h
 *
  *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */

#ifndef MSUSCRIPTOR_H_
#define MSUSCRIPTOR_H_

#include <string>
using namespace std;

class MSuscriptor {
private:
   string codigo;
   int impulsos;
public:
   MSuscriptor();
   void SetCodigo(string);
   void SetImpulsos(int);
   string GetCodigo();
   int GetImpulsos();
   float DetRentaMes();
};


#endif /* MSUSCRIPTOR_H_ */
