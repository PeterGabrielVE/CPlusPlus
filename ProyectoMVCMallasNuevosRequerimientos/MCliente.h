/*
 * Author: Pedro Gabriel Leal
 */

#ifndef MCLIENTE_H
#define MCLIENTE_H
#include<string>
using namespace std;
class MCliente
 {

  private:
   string cedula;
   string nombre;
   int tipomalla;
   int antiguedad;
   float metros;
   int tipomaterial;

  public:
   MCliente();
   //set
   void SetCedula(string c);
   void SetNombre(string n);
   void SetTipoMalla(int tm);
   void SetAntiguedad(int a);
   void SetMetros(float );
   void SetTipomaterial(int tmat); /*requerimiento 2-> */

   //get
   string GetCedula();
   string GetNombre();
   int GetTipoMalla();
   int GetAntiguedad();
   float GetMetros();
   float CalcMonto();
   int GetTipomaterial(); /*requerimiento 2-> */

   //calculos
   float CalcDescuento(); 
   string CalcTipoMallaComprada();    

 };

 #endif
