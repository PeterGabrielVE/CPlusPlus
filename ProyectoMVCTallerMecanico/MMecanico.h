/*
 * MMecanico.h
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#ifndef MMecanico_H
#define MMecanico_H
#include <string>
#include "MRepara.h"
using namespace std;

class MMecanico
{
      private:
        string cedula;
        string nombre;
        int cant_repara;
        float acmonto_comision;
        float mayor;
      public:
        MMecanico();
        void SetCedula(string c);
        void SetNombre(string n);
        void SetCantRepara(int c);
        void SetAcMontoComision(float mc);
        void setMayorCo(float my);
        float GetMayorCo();
        string GetCedula();
        string GetNombre();
        int GetCantRepara();
        float GetAcMontoComision();
        void ProcesarReparacion(MRepara reparacion); // Relaci�n Uso con MRepara
};
#endif
