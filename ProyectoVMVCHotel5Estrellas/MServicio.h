/*
 *  MServicio.h
 *
 *  Created on: 02/02/2014
 *     Author: Pedro Gabriel Leal
 */

#ifndef MServicio_H
#define MServicio_H

using namespace std;

class MServicio
{
  private:
       int tipo;
       float monto;
  public:
       MServicio();
       void SetTipo(int t);
       void SetMonto(float mto);
       int GetTipo();
       float GetMonto();      
};


#endif
