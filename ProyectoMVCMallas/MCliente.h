/*
 *
 * Author: Pedro Gabriel Leal
 *
 */


#ifndef MCLIENTE_H
#define MCLIENTE_H
#include<string>
using namespace std;
class MCliente
 {

  private:
   string cedula,nombre;
   int tipomalla, antiguedad;
   float metros;

  public:
   MCliente();
   //set
   void SetCedula(string c);
   void SetNombre(string n);
   void SetTipoMalla(int tm);
   void SetAntiguedad(int a);
   void SetMetros(float );
   //get
   string GetCedula();
   string GetNombre();
   int GetTipoMalla();
   int GetAntiguedad();
   float GetMetros();
   float CalcMonto();
   //calculos
   float CalcDescuento(); 
   string CalcTipoMallaComprada();    
 };

 #endif
