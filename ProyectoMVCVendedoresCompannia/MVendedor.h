/*
 * Author: Pedro Gabriel Leal
 *
 */


#ifndef MVENDEDOR_H
#define MVENDEDOR_H
#include <string>
#include <cstdlib>
using namespace std;

class MVendedor
{
   private:
      string cedula;
      string nombre;
      float sueldobase;
      float montoventas;
   public:
      MVendedor();
      void SetCedula(string);
      void SetNombre(string);
      void SetSueldobase(float);
      void SetMontoventas(float);
      string GetCedula();
      string GetNombre();
      float GetSueldobase();
      float GetMontoventas();
      float CalcComisionVentas();
      float CalcDeduccion();
      float CalcSueldoNeto();
};
#endif
